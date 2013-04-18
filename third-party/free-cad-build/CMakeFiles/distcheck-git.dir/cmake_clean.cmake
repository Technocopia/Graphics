FILE(REMOVE_RECURSE
  "CMakeFiles/distcheck-git"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/distcheck-git.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
