file(GLOB MUL_LIB_SRC
    "*.cpp"
	"*.h"
)

add_library(MulLib STATIC
	${MUL_LIB_SRC}
	)

# state that anybody linking to us needs to include the current source dir
# to find *.h, while we don't.
target_include_directories(MulLib
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
          