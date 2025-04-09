# Install script for directory: /home/mscrobotics2425laptop4/LEO-ROVER-CODING/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/interbotix_xs_sdk

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/install/interbotix_xs_sdk")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk" TYPE EXECUTABLE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/xs_sdk")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk"
         OLD_RPATH "/opt/ros/humble/lib:/home/mscrobotics2425laptop4/LEO-ROVER-CODING/install/interbotix_xs_msgs/lib:/home/mscrobotics2425laptop4/LEO-ROVER-CODING/install/interbotix_xs_driver/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/mscrobotics2425laptop4/LEO-ROVER-CODING/install/dynamixel_workbench_toolbox/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk/xs_sdk")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/interbotix_xs_sdk" TYPE PROGRAM FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/interbotix_xs_sdk/scripts/xs_sdk_sim.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk/" TYPE DIRECTORY FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/interbotix_xs_sdk/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/interbotix_xs_sdk")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/interbotix_xs_sdk")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk/environment" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk/environment" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_index/share/ament_index/resource_index/packages/interbotix_xs_sdk")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk/cmake" TYPE FILE FILES
    "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_core/interbotix_xs_sdkConfig.cmake"
    "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/ament_cmake_core/interbotix_xs_sdkConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_sdk" TYPE FILE FILES "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/interbotix_xs_sdk/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/mscrobotics2425laptop4/LEO-ROVER-CODING/build/interbotix_xs_sdk/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
