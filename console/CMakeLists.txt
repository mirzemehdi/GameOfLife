cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(drawer LANGUAGES C)



add_library(${PROJECT_NAME} SHARED "")

target_sources(${PROJECT_NAME} PUBLIC board_drawer.c board_drawer.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})#-I.

target_include_directories(${PROJECT_NAME} PUBLIC ../game)

target_link_libraries(${PROJECT_NAME} INTERFACE m) #-lm
target_link_libraries(${PROJECT_NAME} PUBLIC game) 

target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE}) #-D USING_LIB=1


install(TARGETS ${PROJECT_NAME})
install(FILES board_drawer.h cellTable.h board_drawer.h DESTINATION include)