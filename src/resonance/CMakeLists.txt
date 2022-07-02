project(resonance)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE lib1)

target_link_libraries(${PROJECT_NAME} PRIVATE proto)

target_link_libraries(${PROJECT_NAME} PRIVATE ${Protobuf_LIBRARIES})

target_include_directories(${PROJECT_NAME} PRIVATE
                                ${Protobuf_INCLUDE_DIRS}
                                ${CMAKE_CURRENT_BINARY_DIR}/../proto/)
          