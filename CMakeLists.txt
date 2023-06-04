cmake_minimum_required(VERSION 3.22.1)
project("seflysend" VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
    src/main.cpp
    src/login/sign/sign.cpp
    src/login/sign_in/signIn.cpp
    src/login/sign_up/signUp.cpp)

add_executable(seflysend ${SOURCES})

