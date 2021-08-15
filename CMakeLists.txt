cmake_minimum_required (VERSION 3.8)

# Hide "ALL_BUILD" and "ZERO_CHECK" in a folder
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Set project name
project (DataStructures)

# /////////////////////////////////////////////////////////////////////////////
# ////////////////////////// FUNCTIONS ////////////////////////////////////////
# /////////////////////////////////////////////////////////////////////////////
# Recreate the folder architecture inside the Visual Studio solution (might work for other IDEs as well)
function(VS_RegisterFiles _FILES)
    foreach(_file IN ITEMS ${_FILES})
        get_filename_component(_filepath "${_file}" PATH)
        string(REPLACE "${CMAKE_SOURCE_DIR}" "" _group_path "${_filepath}")
        string(REPLACE "/" "\\" _group_path "${_group_path}")
        source_group("${_group_path}" FILES "${_file}")
    endforeach()
endfunction()

# Set C++ version
set(CXX_STANDARD 17)

# Set the folder where the executable is created
IF(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
ENDIF(NOT CMAKE_BUILD_TYPE)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# /////////////////////////////////////////////////////////////////////////////
# ////////////////////////// RESSOURCES ///////////////////////////////////////
# /////////////////////////////////////////////////////////////////////////////

# Set include directories
include_directories(
  ${CMAKE_BINARY_DIR}/src
  ${CMAKE_SOURCE_DIR}/src
  ${CMAKE_SOURCE_DIR}/include)

# Grab all the source files
file(GLOB_RECURSE MY_SOURCES ${CMAKE_SOURCE_DIR}/src/*)

# Create target executable
add_executable(${PROJECT_NAME}
  ${MY_SOURCES}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD ${CXX_STANDARD})

# Recreate the folder architecture inside the Visual Studio solution (might work for other IDEs as well)
VS_RegisterFiles("${MY_SOURCES}")


