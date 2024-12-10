# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CampusConnect_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CampusConnect_autogen.dir/ParseCache.txt"
  "CampusConnect_autogen"
  )
endif()
