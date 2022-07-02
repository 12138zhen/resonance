project(proto)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(GENERATED_SRC GENERATED_HEADER
                      message.proto)

add_library(${PROJECT_NAME} ${GENERATED_SRC} ${GENERATED_HEADER})

#file(${PROTO_PATH} ${CMAKE_CURRENT_BINARY_DIR})
#add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})



