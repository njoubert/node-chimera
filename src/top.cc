#define BUILDING_NODE_EXTENSION
#include <node.h>

#include "browser.h"
#include "chimera.moc"

using namespace v8;

QApplication *app;

// This function is published to the node.js module
// as chimera.processEvents() so that we can 
// periodically have the app run any events it might intercept
//   - Does this do anything? Probably not.
Handle<Value> ProcessEvents(const Arguments& args) {
    HandleScope scope;
    app->processEvents();
    return scope.Close(Undefined());
}


/* 
 *   ============== STEP 2 : Initializing the Module ==================
 */

// This function is what gets registered with Node.js
// as the entrypoint when require('chimera') is called.
void Initialize(Handle<Object> target) {

  //We pass the "exports" object to Browser
  //which will initialize a browser constructor 
  Browser::Initialize(target);
  

  //Create the application that will run the webkit browser
  int argc = 0;
  char** argv = NULL;
  app = new QApplication(argc, argv);
  
  //Publish the ProcessEvents function 
  target->Set(String::NewSymbol("processEvents"),
      FunctionTemplate::New(ProcessEvents)->GetFunction());
}


/* 
 *   ============== STEP 1 : START HERE ==================
 */

// ENTRYPOINT! This defines what happens when Node.js calls require('chimera')
//  Here, it calls the Initialize function (above)
NODE_MODULE(chimera, Initialize)
