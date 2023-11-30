cmake_minimum_required(VERSION 3.18.1)

project("hello-jni")

add_library(${CMAKE_PROJECT_NAME} SHARED
            hello-jni.cpp)

# Include libraries needed for hello-jni lib
target_link_libraries(${CMAKE_PROJECT_NAME}
                      android
                      log)
