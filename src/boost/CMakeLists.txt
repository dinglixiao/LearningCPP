
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

ADD_EXECUTABLE(version_boost version_boost.cpp)
target_link_libraries(version_boost ${OpenCV_LIBS})