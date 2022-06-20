cmake_minimum_required(VERSION 3.10)

# set the project name
project(anter_cmake_tutorial)

add_subdirectory(MyMathLib)
list(APPEND EXTRA_LIBS MyMathLib)
  
# add the executable
add_executable(anter_cmake_tutorial main.cpp)

target_link_libraries(anter_cmake_tutorial PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find all the *.h
target_include_directories(anter_cmake_tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"                           
                           )
