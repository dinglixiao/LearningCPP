
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

SET(opencv version.cpp)
ADD_EXECUTABLE(opencv ${opencv})
target_link_libraries(opencv ${OpenCV_LIBS})