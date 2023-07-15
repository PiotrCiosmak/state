cmake_minimum_required(VERSION 3.25)
project(state)

set(CMAKE_CXX_STANDARD 23)

add_executable(state main.cpp src/Context.cpp include/Context.hpp src/State.cpp include/State.hpp src/ConcreteStateA.cpp include/ConcreteStateA.hpp src/ConcreteStateB.cpp include/ConcreteStateB.hpp)
