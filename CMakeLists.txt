cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(gameoflife LANGUAGES C)

add_subdirectory(game)
add_subdirectory(console)
add_subdirectory(sdl)





set (SRC main.c)

add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC drawer) 
target_link_libraries(${PROJECT_NAME} PUBLIC game) 
target_link_libraries(${PROJECT_NAME} PUBLIC mySDLDrawer) 


install(TARGETS ${PROJECT_NAME})
install(FILES game.h board_drawer.h draw_sdl.h DESTINATION include)