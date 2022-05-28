# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${individual_trajectories_bridge_DIR}/../../../include;/opt/ros/foxy/opt/yaml_cpp_vendor/lib/cmake/yaml-cpp/../../../include")

# append include directories to individual_trajectories_bridge_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'individual_trajectories_bridge' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND individual_trajectories_bridge_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
