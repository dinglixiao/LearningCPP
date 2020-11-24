
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

ADD_EXECUTABLE(version version.cpp)
target_link_libraries(version ${OpenCV_LIBS})