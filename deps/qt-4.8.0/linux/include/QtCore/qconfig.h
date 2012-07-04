/* Everything */

/* Qt Edition */
#ifndef QT_EDITION
#  define QT_EDITION QT_EDITION_OPENSOURCE
#endif

/* Machine byte-order */
#define Q_BIG_ENDIAN 4321
#define Q_LITTLE_ENDIAN 1234
#define QT_BUILD_KEY "x86_64 linux 64 full-config QT_NO_GRAPHICSEFFECT QT_NO_GRAPHICSVIEW QT_NO_STYLE_CDE QT_NO_STYLE_CLEANLOOKS QT_NO_STYLE_MOTIF QT_NO_STYLE_PLASTIQUE QT_NO_STYLESHEET"
#define QT_BUILD_KEY_COMPAT "x86_64 Linux 64 full-config QT_NO_GRAPHICSEFFECT QT_NO_GRAPHICSVIEW QT_NO_STYLE_CDE QT_NO_STYLE_CLEANLOOKS QT_NO_STYLE_MOTIF QT_NO_STYLE_PLASTIQUE QT_NO_STYLESHEET"

#ifdef QT_BOOTSTRAPPED
#define Q_BYTE_ORDER Q_LITTLE_ENDIAN
#else
#define Q_BYTE_ORDER Q_LITTLE_ENDIAN
#endif
/* Machine Architecture */
#ifndef QT_BOOTSTRAPPED
# define QT_ARCH_X86_64
#else
# define QT_ARCH_X86_64
#endif
/* Compile time features */
#define QT_LARGEFILE_SUPPORT 64
#define QT_POINTER_SIZE 8

#ifndef QT_BOOTSTRAPPED

#if defined(QT_BUILTIN_GIF_READER) && defined(QT_NO_BUILTIN_GIF_READER)
# undef QT_BUILTIN_GIF_READER
#elif !defined(QT_BUILTIN_GIF_READER) && !defined(QT_NO_BUILTIN_GIF_READER)
# define QT_BUILTIN_GIF_READER 1
#endif

#if defined(QT_NO_ALSA) && defined(QT_ALSA)
# undef QT_NO_ALSA
#elif !defined(QT_NO_ALSA) && !defined(QT_ALSA)
# define QT_NO_ALSA
#endif

#if defined(QT_NO_CUPS) && defined(QT_CUPS)
# undef QT_NO_CUPS
#elif !defined(QT_NO_CUPS) && !defined(QT_CUPS)
# define QT_NO_CUPS
#endif

#if defined(QT_NO_DBUS) && defined(QT_DBUS)
# undef QT_NO_DBUS
#elif !defined(QT_NO_DBUS) && !defined(QT_DBUS)
# define QT_NO_DBUS
#endif

#if defined(QT_NO_DECLARATIVE) && defined(QT_DECLARATIVE)
# undef QT_NO_DECLARATIVE
#elif !defined(QT_NO_DECLARATIVE) && !defined(QT_DECLARATIVE)
# define QT_NO_DECLARATIVE
#endif

#if defined(QT_NO_EGL) && defined(QT_EGL)
# undef QT_NO_EGL
#elif !defined(QT_NO_EGL) && !defined(QT_EGL)
# define QT_NO_EGL
#endif

#if defined(QT_NO_GLIB) && defined(QT_GLIB)
# undef QT_NO_GLIB
#elif !defined(QT_NO_GLIB) && !defined(QT_GLIB)
# define QT_NO_GLIB
#endif

#if defined(QT_NO_GSTREAMER) && defined(QT_GSTREAMER)
# undef QT_NO_GSTREAMER
#elif !defined(QT_NO_GSTREAMER) && !defined(QT_GSTREAMER)
# define QT_NO_GSTREAMER
#endif

#if defined(QT_NO_ICD) && defined(QT_ICD)
# undef QT_NO_ICD
#elif !defined(QT_NO_ICD) && !defined(QT_ICD)
# define QT_NO_ICD
#endif

#if defined(QT_NO_ICONV) && defined(QT_ICONV)
# undef QT_NO_ICONV
#elif !defined(QT_NO_ICONV) && !defined(QT_ICONV)
# define QT_NO_ICONV
#endif

#if defined(QT_NO_IMAGEFORMAT_MNG) && defined(QT_IMAGEFORMAT_MNG)
# undef QT_NO_IMAGEFORMAT_MNG
#elif !defined(QT_NO_IMAGEFORMAT_MNG) && !defined(QT_IMAGEFORMAT_MNG)
# define QT_NO_IMAGEFORMAT_MNG
#endif

#if defined(QT_NO_IMAGEFORMAT_TIFF) && defined(QT_IMAGEFORMAT_TIFF)
# undef QT_NO_IMAGEFORMAT_TIFF
#elif !defined(QT_NO_IMAGEFORMAT_TIFF) && !defined(QT_IMAGEFORMAT_TIFF)
# define QT_NO_IMAGEFORMAT_TIFF
#endif

#if defined(QT_NO_MULTIMEDIA) && defined(QT_MULTIMEDIA)
# undef QT_NO_MULTIMEDIA
#elif !defined(QT_NO_MULTIMEDIA) && !defined(QT_MULTIMEDIA)
# define QT_NO_MULTIMEDIA
#endif

#if defined(QT_NO_NAS) && defined(QT_NAS)
# undef QT_NO_NAS
#elif !defined(QT_NO_NAS) && !defined(QT_NAS)
# define QT_NO_NAS
#endif

#if defined(QT_NO_OPENGL) && defined(QT_OPENGL)
# undef QT_NO_OPENGL
#elif !defined(QT_NO_OPENGL) && !defined(QT_OPENGL)
# define QT_NO_OPENGL
#endif

#if defined(QT_NO_OPENVG) && defined(QT_OPENVG)
# undef QT_NO_OPENVG
#elif !defined(QT_NO_OPENVG) && !defined(QT_OPENVG)
# define QT_NO_OPENVG
#endif

#if defined(QT_NO_PHONON) && defined(QT_PHONON)
# undef QT_NO_PHONON
#elif !defined(QT_NO_PHONON) && !defined(QT_PHONON)
# define QT_NO_PHONON
#endif

#if defined(QT_NO_PULSEAUDIO) && defined(QT_PULSEAUDIO)
# undef QT_NO_PULSEAUDIO
#elif !defined(QT_NO_PULSEAUDIO) && !defined(QT_PULSEAUDIO)
# define QT_NO_PULSEAUDIO
#endif

#if defined(QT_NO_QWS_QPF) && defined(QT_QWS_QPF)
# undef QT_NO_QWS_QPF
#elif !defined(QT_NO_QWS_QPF) && !defined(QT_QWS_QPF)
# define QT_NO_QWS_QPF
#endif

#if defined(QT_NO_QWS_QPF2) && defined(QT_QWS_QPF2)
# undef QT_NO_QWS_QPF2
#elif !defined(QT_NO_QWS_QPF2) && !defined(QT_QWS_QPF2)
# define QT_NO_QWS_QPF2
#endif

#if defined(QT_NO_S60) && defined(QT_S60)
# undef QT_NO_S60
#elif !defined(QT_NO_S60) && !defined(QT_S60)
# define QT_NO_S60
#endif

#if defined(QT_NO_SCRIPT) && defined(QT_SCRIPT)
# undef QT_NO_SCRIPT
#elif !defined(QT_NO_SCRIPT) && !defined(QT_SCRIPT)
# define QT_NO_SCRIPT
#endif

#if defined(QT_NO_SCRIPTTOOLS) && defined(QT_SCRIPTTOOLS)
# undef QT_NO_SCRIPTTOOLS
#elif !defined(QT_NO_SCRIPTTOOLS) && !defined(QT_SCRIPTTOOLS)
# define QT_NO_SCRIPTTOOLS
#endif

#if defined(QT_NO_SESSIONMANAGER) && defined(QT_SESSIONMANAGER)
# undef QT_NO_SESSIONMANAGER
#elif !defined(QT_NO_SESSIONMANAGER) && !defined(QT_SESSIONMANAGER)
# define QT_NO_SESSIONMANAGER
#endif

#if defined(QT_NO_STYLE_GTK) && defined(QT_STYLE_GTK)
# undef QT_NO_STYLE_GTK
#elif !defined(QT_NO_STYLE_GTK) && !defined(QT_STYLE_GTK)
# define QT_NO_STYLE_GTK
#endif

#if defined(QT_NO_STYLE_S60) && defined(QT_STYLE_S60)
# undef QT_NO_STYLE_S60
#elif !defined(QT_NO_STYLE_S60) && !defined(QT_STYLE_S60)
# define QT_NO_STYLE_S60
#endif

#if defined(QT_NO_SVG) && defined(QT_SVG)
# undef QT_NO_SVG
#elif !defined(QT_NO_SVG) && !defined(QT_SVG)
# define QT_NO_SVG
#endif

#if defined(QT_NO_SXE) && defined(QT_SXE)
# undef QT_NO_SXE
#elif !defined(QT_NO_SXE) && !defined(QT_SXE)
# define QT_NO_SXE
#endif

#if defined(QT_NO_XINERAMA) && defined(QT_XINERAMA)
# undef QT_NO_XINERAMA
#elif !defined(QT_NO_XINERAMA) && !defined(QT_XINERAMA)
# define QT_NO_XINERAMA
#endif

#if defined(QT_NO_XKB) && defined(QT_XKB)
# undef QT_NO_XKB
#elif !defined(QT_NO_XKB) && !defined(QT_XKB)
# define QT_NO_XKB
#endif

#if defined(QT_NO_XMLPATTERNS) && defined(QT_XMLPATTERNS)
# undef QT_NO_XMLPATTERNS
#elif !defined(QT_NO_XMLPATTERNS) && !defined(QT_XMLPATTERNS)
# define QT_NO_XMLPATTERNS
#endif

#if defined(QT_RUNTIME_XCURSOR) && defined(QT_NO_RUNTIME_XCURSOR)
# undef QT_RUNTIME_XCURSOR
#elif !defined(QT_RUNTIME_XCURSOR) && !defined(QT_NO_RUNTIME_XCURSOR)
# define QT_RUNTIME_XCURSOR
#endif

#if defined(QT_RUNTIME_XFIXES) && defined(QT_NO_RUNTIME_XFIXES)
# undef QT_RUNTIME_XFIXES
#elif !defined(QT_RUNTIME_XFIXES) && !defined(QT_NO_RUNTIME_XFIXES)
# define QT_RUNTIME_XFIXES
#endif

#if defined(QT_RUNTIME_XINPUT) && defined(QT_NO_RUNTIME_XINPUT)
# undef QT_RUNTIME_XINPUT
#elif !defined(QT_RUNTIME_XINPUT) && !defined(QT_NO_RUNTIME_XINPUT)
# define QT_RUNTIME_XINPUT
#endif

#if defined(QT_RUNTIME_XRANDR) && defined(QT_NO_RUNTIME_XRANDR)
# undef QT_RUNTIME_XRANDR
#elif !defined(QT_RUNTIME_XRANDR) && !defined(QT_NO_RUNTIME_XRANDR)
# define QT_RUNTIME_XRANDR
#endif

#if defined(QT_USE_MATH_H_FLOATS) && defined(QT_NO_USE_MATH_H_FLOATS)
# undef QT_USE_MATH_H_FLOATS
#elif !defined(QT_USE_MATH_H_FLOATS) && !defined(QT_NO_USE_MATH_H_FLOATS)
# define QT_USE_MATH_H_FLOATS
#endif

#ifndef Q_WS_QPA
# define Q_WS_QPA
#endif

#endif // QT_BOOTSTRAPPED

#define QT_VISIBILITY_AVAILABLE

