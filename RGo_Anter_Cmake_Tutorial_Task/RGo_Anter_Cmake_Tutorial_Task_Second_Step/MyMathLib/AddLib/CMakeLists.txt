file(GLOB ADD_LIB_SRC
    "*.cpp"
	"*.h"
)

add_library(AddLib STATIC
	${ADD_LIB_SRC}
	)

# state that anybody linking to us needs to include the current source dir
# to find MathFunctions.h, while we don't.
target_include_directories(AddLib
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
          