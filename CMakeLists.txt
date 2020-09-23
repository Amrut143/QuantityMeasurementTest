cmake_minimum_required(VERSION 3.17.3) 
project(QuantityMeasurementTest) 
add_subdirectory(lib/googletest) 
include_directories(lib/googletest/include) 
add_executable(executeTests main/Unit.cpp main/Unit.h main/QuantityMeasurement.h 
                main/QuantityMeasurement.cpp main/TypesOfUnit.h test/QuantityMeasurementTest.cpp) 
target_link_libraries(executeTests PRIVATE gtest)