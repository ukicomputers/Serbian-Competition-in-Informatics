cmake_minimum_required(VERSION 3.12)
project(takmicenje)

file(GLOB SOURCES "src/*.cpp")

foreach(SOURCE_FILE ${SOURCES})
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${SOURCE_FILE})
endforeach()
