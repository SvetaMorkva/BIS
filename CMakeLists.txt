cmake_minimum_required(VERSION 3.17)
project(lab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab1 main.cpp GeneratePrime.cpp GeneratePrime.h)

set(GMP_DIR "/usr/local/Cellar/gmp/6.2.0")
include_directories(lab1 ${GMP_DIR}/include)
target_link_libraries(lab1
        "${GMP_DIR}/lib/libgmp.dylib"
        "${GMP_DIR}/lib/libgmp.a"
        "${GMP_DIR}/lib/libgmpxx.a"
        "${GMP_DIR}/lib/libgmpxx.dylib"
        )