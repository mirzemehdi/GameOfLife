cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(cellTable LANGUAGES C)

add_subdirectory(arena)
add_subdirectory(cell)
add_subdirectory(cellList)


add_library(${PROJECT_NAME} SHARED "")

target_sources(${PROJECT_NAME} PUBLIC cellTable.c cellTable.h )

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})#-I.


target_link_libraries(${PROJECT_NAME} INTERFACE m) #-lm

target_link_libraries(${PROJECT_NAME} PUBLIC arena)
target_link_libraries(${PROJECT_NAME} PUBLIC cell)
target_link_libraries(${PROJECT_NAME} PUBLIC cellList)


target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE}) #-D USING_LIB=1


install(TARGETS ${PROJECT_NAME})
install(FILES arena.h cell.h cellList.h cellTable.h DESTINATION include)