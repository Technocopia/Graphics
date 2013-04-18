FILE(REMOVE_RECURSE
  "CMakeFiles/Plot"
  "../../../Mod/Plot/Plot.py"
  "../../../Mod/Plot/InitGui.py"
  "../../../Mod/Plot/PlotGui.py"
  "../../../Mod/Plot/Plot_rc.py"
  "../../../Mod/Plot/plotAxes/__init__.py"
  "../../../Mod/Plot/plotAxes/TaskPanel.py"
  "../../../Mod/Plot/plotAxes/TaskPanel.ui"
  "../../../Mod/Plot/plotLabels/__init__.py"
  "../../../Mod/Plot/plotLabels/TaskPanel.py"
  "../../../Mod/Plot/plotLabels/TaskPanel.ui"
  "../../../Mod/Plot/plotPositions/__init__.py"
  "../../../Mod/Plot/plotPositions/TaskPanel.py"
  "../../../Mod/Plot/plotPositions/TaskPanel.ui"
  "../../../Mod/Plot/plotSave/__init__.py"
  "../../../Mod/Plot/plotSave/TaskPanel.py"
  "../../../Mod/Plot/plotSave/TaskPanel.ui"
  "../../../Mod/Plot/plotSeries/__init__.py"
  "../../../Mod/Plot/plotSeries/TaskPanel.py"
  "../../../Mod/Plot/plotSeries/TaskPanel.ui"
  "../../../Mod/Plot/plotUtils/__init__.py"
  "../../../Mod/Plot/plotUtils/Paths.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/Plot.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
