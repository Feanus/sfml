cmake_minimum_required(VERSION 3.16)
project(game LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY git@github.com:SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

set (SOURCE_FILES
"src/main.cpp"
"src/game_board.h"
"src/game_board.cpp"
"src/snake.h"
"src/snake.cpp"
"src/food.h"
"src/food.cpp"
)
add_executable(game ${SOURCE_FILES})
target_link_libraries(game PRIVATE sfml-graphics)
target_compile_features(game PRIVATE cxx_std_17)

# if(WIN32)
#     add_custom_command(
#         TARGET game
#         COMMENT "Copy OpenAL DLL"
#         PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:CMakeSFMLProject>
#         VERBATIM)
# endif()

install(TARGETS game)
