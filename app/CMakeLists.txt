add_executable(main_app main.cpp)
target_link_libraries(main_app PUBLIC average_lib)
target_include_directories(main_app PUBLIC "${PROJECT_SOURCE_DIR}")
