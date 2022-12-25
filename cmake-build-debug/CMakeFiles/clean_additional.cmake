# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\StudentManage_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\StudentManage_autogen.dir\\ParseCache.txt"
  "StudentManage_autogen"
  )
endif()
