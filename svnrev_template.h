//
// if you change this file, please also change generateStub.bat
//

#define SVN_REV $WCREV$
#define SVN_REV_STR "$WCMODS?$WCREV$:$WCREV$$"

#ifdef _DEBUG
  #define _IS__DEBUG 1
  #define _BUILD_STR "DEBUG"
#else
  #define _IS_DEBUG 0
  #define _BUILD_STR "RELEASE"
#endif

#define STARCRAFT_VERSION "1.16.1"
