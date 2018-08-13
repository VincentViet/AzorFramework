cmake_minimum_required(VERSION 3.0)
project(AzorFramework)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
set(INCLUDE_PATH "${PROJECT_SOURCE_DIR}/include")
set(STATIC_LIBRARY_DIR "${PROJECT_SOURCE_DIR}/lib")
set(OUTPUT_DIR "${PROJECT_BINARY_DIR}/bin")
set(DEBUG_OUTPUT_DIR "${PROJECT_BINARY_DIR}/bin/Debug")
set(RELEASE_OUTPUT_DIR "${PROJECT_BINARY_DIR}/bin/Release")
set(DLL_DIR "${PROJECT_SOURCE_DIR}/dll")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(SHADER_DIR "${PROJECT_SOURCE_DIR}/shaders")
set(FONT_DIR "${PROJECT_SOURCE_DIR}/resources/fonts")
set(SOUND_DIR "${PROJECT_SOURCE_DIR}/resources/sounds")
set(TEXTURE_DIR "${PROJECT_SOURCE_DIR}/resources/textures")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

file(GLOB SRC_FILES "${SRC_DIR}/*.*")
file(GLOB DLL_FILES "${DLL_DIR}/*.dll")
file(GLOB DEBUG_LIBS "${STATIC_LIBRARY_DIR}/Debug/*.lib")
file(GLOB SHADER_FILES "${SHADER_DIR}/*.*")
file(GLOB FONT_FILES "${FONT_DIR}/*.*")
file(GLOB SOUND_FILES "${SOUND_DIR}/*.*")
file(GLOB TEXTURE_FILES "${TEXTURE_DIR}/*.*")

#add shaders and resources folder
#Debug
file(MAKE_DIRECTORY "${DEBUG_OUTPUT_DIR}/shaders")
file(MAKE_DIRECTORY "${DEBUG_OUTPUT_DIR}/resources/fonts")
file(MAKE_DIRECTORY "${DEBUG_OUTPUT_DIR}/resources/sounds")
file(MAKE_DIRECTORY "${DEBUG_OUTPUT_DIR}/resources/textures")

#Release
file(MAKE_DIRECTORY "${RELEASE_OUTPUT_DIR}/shaders")
file(MAKE_DIRECTORY "${RELEASE_OUTPUT_DIR}/resources/fonts")
file(MAKE_DIRECTORY "${RELEASE_OUTPUT_DIR}/resources/sounds")
file(MAKE_DIRECTORY "${RELEASE_OUTPUT_DIR}/resources/textures")


#copy dll files, shader files, fonts, sounds and textures to bin

#dll files
foreach(file ${DLL_FILES})
    configure_file(${file} ${DEBUG_OUTPUT_DIR} COPYONLY)
    configure_file(${file} ${RELEASE_OUTPUT_DIR} COPYONLY)
endforeach(file)
    message("dll files: ${DLL_FILES}\n")

#shader files
foreach(file ${SHADER_FILES})
    configure_file(${file} "${DEBUG_OUTPUT_DIR}/shaders" COPYONLY)
    configure_file(${file} "${RELEASE_OUTPUT_DIR}/shaders" COPYONLY)
endforeach(file)
    message("shader files: ${SHADER_FILES}\n")

#font files
foreach(file ${FONT_FILES})
    configure_file(${file} "${DEBUG_OUTPUT_DIR}/resources/fonts" COPYONLY)
    configure_file(${file} "${RELEASE_OUTPUT_DIR}/resources/fonts" COPYONLY)
endforeach(file)
    message("font files: ${FONT_FILES}\n")

#sound files
foreach(file ${SOUND_FILES})
    configure_file(${file} "${DEBUG_OUTPUT_DIR}/resources/sounds" COPYONLY)
    configure_file(${file} "${RELEASE_OUTPUT_DIR}/resources/sounds" COPYONLY)
endforeach(file)
    message("sound files: ${SOUND_FILES}\n")

#texture files
foreach(file ${TEXTURE_FILES})
    configure_file(${file} "${DEBUG_OUTPUT_DIR}/resources/textures" COPYONLY)
    configure_file(${file} "${RELEASE_OUTPUT_DIR}/resources/textures" COPYONLY)
endforeach(file)
    message("texture files: ${TEXTURE_FILES}\n")


# specify include folder
include_directories(${INCLUDE_PATH})

add_executable(AzorGame ${SRC_FILES})

target_link_libraries(AzorGame ${DEBUG_LIBS})
