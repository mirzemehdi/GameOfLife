cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(gameoflife LANGUAGES C)

add_subdirectory(game)
add_subdirectory(console)




set (SRC main.c)

add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC drawer) 
target_link_libraries(${PROJECT_NAME} PUBLIC game) 

install(TARGETS ${PROJECT_NAME})
install(FILES game.h DESTINATION include)