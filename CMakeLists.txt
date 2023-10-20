cmake_minimum_required(VERSION 3.6.0)
project(Tetris)
#location where header files can be found
include_directories(
${PROJECT_SOURCE_DIR} / include ${PROJECT_SOURCE_DIR} / include / abs
${PROJECT_SOURCE_DIR} / include / components
)
#${PROJECT_SOURCE_DIR} / src)

#location where source files can he found
file(GLOB SRCS
#"${PROJECT_SOURCE_DIR}/include/*"
	"${PROJECT_SOURCE_DIR}/src/*.cpp"
	"${PROJECT_SOURCE_DIR}/src/abs/*.cpp"
	"${PROJECT_SOURCE_DIR}/src/components/*.cpp")

add_executable(Tetris ${SRCS})

find_package(SDL2 REQUIRED)
target_include_directories(Tetris PRIVATE ${SDL2_INCLUDE_DIRS})
target_link_libraries(Tetris PRIVATE ${SDL2_LIBRARIES})

find_package(SDL2_ttf REQUIRED)
target_include_directories(Tetris PRIVATE ${SDL2_TTF_INCLUDE_DIRS})
target_link_libraries(Tetris PRIVATE ${SDL2_TTF_LIBRARIES})

find_package(SDL2_image REQUIRED)
target_include_directories(Tetris PRIVATE ${SDL2_IMAGE_INCLUDE_DIRS}) 
target_link_libraries(Tetris PRIVATE ${SDL2_IMAGE_LIBRARIES})