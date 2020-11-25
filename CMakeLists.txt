cmake_minimum_required(VERSION 3.17)
cmake_policy(SET CMP0048 NEW)
project(LearningCPP VERSION "0.1.0")

add_subdirectory(src/boost)  # 指定 编译子目录
add_subdirectory(src/opencv)
add_subdirectory(src/std)
