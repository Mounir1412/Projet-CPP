# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\interfaceqt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\interfaceqt_autogen.dir\\ParseCache.txt"
  "interfaceqt_autogen"
  )
endif()
