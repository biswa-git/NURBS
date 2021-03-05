cmake_minimum_required (VERSION 3.2)
project (B-Spline)
include_directories(${CMAKE_SOURCE_DIR}/source/hpp)

add_executable(bspline
source/cpp/b_spline.cpp
source/cpp/knot_vector.cpp
source/cpp/main.cpp
source/cpp/vector.cpp
source/cpp/vertex.cpp
source/cpp/vertex_list.cpp
)

install(TARGETS bspline DESTINATION ${CMAKE_SOURCE_DIR}/exe)
