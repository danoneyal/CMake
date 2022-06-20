cmake_minimum_required(VERSION 3.10)

file(GLOB MY_MATH_LIB_LIB_SRC
	"*.h"
)
# set the project name
project(MyMathLib)

add_subdirectory(DivLib)
add_subdirectory(AddLib)
add_subdirectory(SubLib)
add_subdirectory(MulLib)
list(APPEND EXTRA_LIBS DivLib)
list(APPEND EXTRA_LIBS AddLib)
list(APPEND EXTRA_LIBS SubLib)
list(APPEND EXTRA_LIBS MulLib)
  

# add the library 
add_library(MyMathLib INTERFACE)
#	${MY_MATH_LIB_LIB_SRC}
#	)

target_link_libraries(MyMathLib PUBLIC INTERFACE ${EXTRA_LIBS})

# state that anybody linking to us needs to include the current source dir
target_include_directories(MyMathLib
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
          
