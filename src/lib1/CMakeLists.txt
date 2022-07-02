project(lib1)

file(GLOB lib_source CONFIGURE_DEPENDS *.cpp *.h include/*.cpp include/*.h)

add_library(${PROJECT_NAME} ${lib_source})

#add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)