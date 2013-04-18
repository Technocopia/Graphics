FILE(REMOVE_RECURSE
  "CMakeFiles/Example_data"
  "Schenkel.stp"
  "DrawingExample.FCStd"
  "EngineBlock.FCStd"
  "PartDesignExample.FCStd"
  "RobotExample.FCStd"
  "ArchDetail.FCStd"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/Example_data.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
