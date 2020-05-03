cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(mySDLDrawer LANGUAGES C)

find_package(SDL2 CONFIG REQUIRED )

add_library(${PROJECT_NAME} SHARED "")

target_sources(${PROJECT_NAME} PUBLIC draw_sdl.c draw_sdl.h)

target_link_libraries(${PROJECT_NAME} PUBLIC SDL2::SDL2 SDL2::SDL2main)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})#-I.

target_include_directories(${PROJECT_NAME} PUBLIC ../game)

target_link_libraries(${PROJECT_NAME} INTERFACE m) #-lm
target_link_libraries(${PROJECT_NAME} PUBLIC game) 

target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE}) #-D USING_LIB=1


install(TARGETS ${PROJECT_NAME})
install(FILES draw_sdl.h cellTable.h DESTINATION include)