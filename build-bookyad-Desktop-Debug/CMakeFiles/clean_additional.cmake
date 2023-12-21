# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\bookyad_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\bookyad_autogen.dir\\ParseCache.txt"
  "bookyad_autogen"
  )
endif()
