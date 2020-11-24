
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

ADD_EXECUTABLE(version_opencv version_opencv.cpp)
target_link_libraries(version_opencv ${OpenCV_LIBS})