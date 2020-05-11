cmake_minimum_required(VERSION 3.11)
cmake_policy(SET CMP0076 NEW)

project(gameoflife LANGUAGES C)

add_subdirectory(game)
add_subdirectory(console)
add_subdirectory(sdl)


set (SRC main.c)
set (SRC_TEST unit_tests.c)

add_executable(${PROJECT_NAME} "")
add_executable(mytest ${SRC_TEST})
target_sources(${PROJECT_NAME} PUBLIC ${SRC})
target_sources(mytest PUBLIC ${SRC_TEST})


target_link_libraries(${PROJECT_NAME} PUBLIC drawer) 
target_link_libraries(${PROJECT_NAME} PUBLIC game) 
target_link_libraries(${PROJECT_NAME} PUBLIC mySDLDrawer) 

target_link_libraries(mytest PUBLIC drawer) 
target_link_libraries(mytest PUBLIC game) 
target_link_libraries(mytest PUBLIC mySDLDrawer) 
target_link_libraries(mytest PUBLIC cunit) 
target_link_libraries(mytest PUBLIC gcov) 
target_link_libraries(mytest INTERFACE m) 

target_compile_options(mytest PUBLIC "--coverage")
target_link_options(mytest PUBLIC "--coverage")


# CTEST
enable_testing()
add_test(NAME mytest COMMAND mytest)

## COVERAGE
add_custom_target(cover
COMMAND cmake --build . --target mytest
COMMAND gcovr -r ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR} $<TARGET_FILE:mytest>
WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

add_custom_target(cover_html
COMMAND cmake --build . --target mytest
COMMAND gcovr --html --html-detail -o index.html -r ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR} $<TARGET_FILE:mytest>
WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

install(TARGETS ${PROJECT_NAME})
install(FILES game.h board_drawer.h draw_sdl.h DESTINATION include)