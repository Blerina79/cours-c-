cmake_minimum_required(VERSION 3.5.0)
project(cars VERSION 0.1.0 LANGUAGES C CXX)

add_executable(cars src/main.cpp src/vehicule.cpp  src/voiture.cpp src/moto.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
