cmake_minimum_required(VERSION 3.10)

# set the project name
project(anter_cmake_tutorial)

add_subdirectory(DivLib)
add_subdirectory(AddLib)
add_subdirectory(SubLib)
add_subdirectory(MulLib)
list(APPEND EXTRA_LIBS DivLib)
list(APPEND EXTRA_LIBS AddLib)
list(APPEND EXTRA_LIBS SubLib)
list(APPEND EXTRA_LIBS MulLib)
  

# add the executable
add_executable(anter_cmake_tutorial main.cpp)

target_link_libraries(anter_cmake_tutorial PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find all the *.h
target_include_directories(anter_cmake_tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"                           
                           )
