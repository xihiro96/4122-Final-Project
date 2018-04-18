cmake_minimum_required(VERSION 3.2)
project(SFMLDemo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Scenes/Scene1.cpp Scenes/Scene1.h)
add_executable(SFMLDemo ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(SFMLDemo ${SFML_LIBRARIES})
endif()
file(COPY "Images/Cutscenes/Fonts/eutemia-i.italic.ttf" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "Images/Cutscenes/Fonts/made-in-china.regular.ttf" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "Images/Cutscenes/Background/forest.jpeg" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "Images/Cutscenes/Sprites/samurai.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "Images/Cutscenes/Sprites/brother.png" DESTINATION "${CMAKE_BINARY_DIR}")
