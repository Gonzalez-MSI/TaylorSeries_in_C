# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appQuickQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appQuickQT_autogen.dir\\ParseCache.txt"
  "appQuickQT_autogen"
  )
endif()
