FILE(REMOVE_RECURSE
  "../../../Mod/OpenSCAD/Init.py"
  "../../../Mod/OpenSCAD/InitGui.py"
  "../../../Mod/OpenSCAD/OpenSCAD_rc.py"
  "../../../Mod/OpenSCAD/OpenSCAD2Dgeom.py"
  "../../../Mod/OpenSCAD/OpenSCADFeatures.py"
  "../../../Mod/OpenSCAD/OpenSCADUtils.py"
  "../../../Mod/OpenSCAD/OpenSCADCommands.py"
  "../../../Mod/OpenSCAD/exportCSG.py"
  "../../../Mod/OpenSCAD/importCSG.py"
  "../../../Mod/OpenSCAD/tokrules.py"
  "../../../Mod/OpenSCAD/colorcodeshapes.py"
  "../../../Mod/OpenSCAD/expandplacements.py"
  "../../../Mod/OpenSCAD/replaceobj.py"
  "../../../Mod/OpenSCAD/ply/lex.py"
  "../../../Mod/OpenSCAD/ply/README"
  "../../../Mod/OpenSCAD/ply/yacc.py"
  "../../../Mod/OpenSCAD/ply/__init__.py"
  "CMakeFiles/OpenSCAD"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/OpenSCAD.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
