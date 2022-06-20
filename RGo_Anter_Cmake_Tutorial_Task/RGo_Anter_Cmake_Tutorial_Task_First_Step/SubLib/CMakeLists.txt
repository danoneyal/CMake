file(GLOB SUB_LIB_SRC
    "*.cpp"
	"*.h"
)

add_library(SubLib STATIC
	${SUB_LIB_SRC}
	)

# state that anybody linking to us needs to include the current source dir
# to find MathFunctions.h, while we don't.
target_include_directories(SubLib
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
          