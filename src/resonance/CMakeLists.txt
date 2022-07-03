project(resonance)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(GENERATED_SRC GENERATED_HEADER
                      message.proto)

add_executable(${PROJECT_NAME} main.cpp ${GENERATED_SRC} ${GENERATED_HEADER})

target_link_libraries(${PROJECT_NAME} PRIVATE lib1)


#target_link_libraries(${PROJECT_NAME} PRIVATE proto)

target_link_libraries(${PROJECT_NAME} PRIVATE ${Protobuf_LIBRARIES})

target_include_directories(${PROJECT_NAME} PRIVATE ${Protobuf_INCLUDE_DIRS}
                                ${CMAKE_CURRENT_BINARY_DIR})
          
