cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(arena LANGUAGES C)



add_library(${PROJECT_NAME} SHARED "")

target_sources(${PROJECT_NAME} PUBLIC arena.c arena.h )

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})#-I.
target_include_directories(${PROJECT_NAME} PUBLIC ../cell)


target_link_libraries(${PROJECT_NAME} INTERFACE m) #-lm


target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE}) #-D USING_LIB=1


install(TARGETS ${PROJECT_NAME})
install(FILES arena.h cell.h DESTINATION include)