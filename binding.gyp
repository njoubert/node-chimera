{
  'targets': [
    {
      'target_name': 'chimera',
      'sources': [
        'src/top.cc',
        'src/cookiejar.cc',
        'src/chimera.cc',
        'src/browser.cc'
      ],
      'conditions': [
        ['OS=="mac"', {
          'include_dirs': [
            '/usr/local/include',
            '/usr/local/include/QtCore',
            '/usr/local/include/QtGui',
            '/usr/local/include/QtNetwork',
            '/usr/local/include/QtWebkit'
          ],
          'libraries': [
            '-F/usr/local/lib',
            '-F//System/Library/Frameworks',
            '-framework AppKit',
            '-framework QtCore',
            '-framework QtGui',
            '-framework QtNetwork',
            '-framework QtWebkit'

          ],
        }],
        ['OS=="linux"', {
          'include_dirs': [
            'qt_compiled/include',
            'qt_compiled/include/QtCore',
            'qt_compiled/include/QtGui',
            'qt_compiled/include/QtNetwork',
            'qt_compiled/include/QtWebKit'
          ],
          'libraries': [
            '../qt_compiled/lib/libQtCore.a',
            '../qt_compiled/lib/libQtGui.a',
            '../qt_compiled/lib/libQtXml.a',
            '../qt_compiled/lib/libQtNetwork.a',
            '../qt_compiled/lib/libQtWebKit.a',
            '../qt_compiled/lib/libwebcore.a',
            '../qt_compiled/lib/libjscore.a'
          ],
        }]
      ]
    }
  ]
}
