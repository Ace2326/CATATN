cmake_minimum_required(VERSION 3.10)
project(CATATN)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(OpenCV REQUIRED)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${OpenCV_INCLUDE_DIRS})

# Add executable
add_executable(catatn 
    src/main.cpp
    src/CATATN.cpp
)

# Link libraries
target_link_libraries(catatn ${OpenCV_LIBS})
