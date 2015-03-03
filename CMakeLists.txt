cmake_minimum_required(VERSION 2.8)
project(cpp-stub-python3)


set(PYTHON_INCLUDE_DIR "/Users/john/local/include/python3.4dm")
set(PYTHON_LIBRARY "/Users/john/local/lib/libpython3.4dm.a")

set(headers )
set(sources main.cpp)

include_directories(${PYTHON_INCLUDE_DIR})
add_executable(cpp_python ${headers} ${sources})
target_link_libraries(cpp_python ${PYTHON_LIBRARY})

