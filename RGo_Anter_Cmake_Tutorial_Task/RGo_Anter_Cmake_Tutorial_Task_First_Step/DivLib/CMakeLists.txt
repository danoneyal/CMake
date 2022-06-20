file(GLOB DIV_LIB_SRC
    "*.cpp"
	"*.h"
)

add_library(DivLib STATIC
	${DIV_LIB_SRC}
	)

# state that anybody linking to us needs to include the current source dir
# to find *.h, while we don't.
target_include_directories(DivLib
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
          