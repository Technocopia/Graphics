FILE(REMOVE_RECURSE
  "CMakeFiles/Ship"
  "../../../Mod/Ship/InitGui.py"
  "../../../Mod/Ship/ShipGui.py"
  "../../../Mod/Ship/Instance.py"
  "../../../Mod/Ship/SimInstance.py"
  "../../../Mod/Ship/TankInstance.py"
  "../../../Mod/Ship/Ship_rc.py"
  "../../../Mod/Ship/resources/icons/Ico.xpm"
  "../../../Mod/Ship/resources/examples/s60.fcstd"
  "../../../Mod/Ship/resources/examples/s60_katamaran.fcstd"
  "../../../Mod/Ship/resources/examples/wigley.fcstd"
  "../../../Mod/Ship/resources/examples/wigley_katamaran.fcstd"
  "../../../Mod/Ship/shipLoadExample/__init__.py"
  "../../../Mod/Ship/shipLoadExample/TaskPanel.py"
  "../../../Mod/Ship/shipLoadExample/TaskPanel.ui"
  "../../../Mod/Ship/shipCreateShip/__init__.py"
  "../../../Mod/Ship/shipCreateShip/Preview.py"
  "../../../Mod/Ship/shipCreateShip/TaskPanel.py"
  "../../../Mod/Ship/shipCreateShip/TaskPanel.ui"
  "../../../Mod/Ship/shipOutlineDraw/__init__.py"
  "../../../Mod/Ship/shipOutlineDraw/Plot.py"
  "../../../Mod/Ship/shipOutlineDraw/Preview.py"
  "../../../Mod/Ship/shipOutlineDraw/TaskPanel.py"
  "../../../Mod/Ship/shipOutlineDraw/TaskPanel.ui"
  "../../../Mod/Ship/shipAreasCurve/__init__.py"
  "../../../Mod/Ship/shipAreasCurve/PlotAux.py"
  "../../../Mod/Ship/shipAreasCurve/Preview.py"
  "../../../Mod/Ship/shipAreasCurve/TaskPanel.py"
  "../../../Mod/Ship/shipAreasCurve/TaskPanel.ui"
  "../../../Mod/Ship/shipHydrostatics/__init__.py"
  "../../../Mod/Ship/shipHydrostatics/PlotAux.py"
  "../../../Mod/Ship/shipHydrostatics/TaskPanel.py"
  "../../../Mod/Ship/shipHydrostatics/TaskPanel.ui"
  "../../../Mod/Ship/shipHydrostatics/Tools.py"
  "../../../Mod/Ship/shipUtils/__init__.py"
  "../../../Mod/Ship/shipUtils/Math.py"
  "../../../Mod/Ship/shipUtils/Paths.py"
  "../../../Mod/Ship/tankWeights/__init__.py"
  "../../../Mod/Ship/tankWeights/Preview.py"
  "../../../Mod/Ship/tankWeights/TaskPanel.py"
  "../../../Mod/Ship/tankWeights/TaskPanel.ui"
  "../../../Mod/Ship/tankCreateTank/__init__.py"
  "../../../Mod/Ship/tankCreateTank/TaskPanel.py"
  "../../../Mod/Ship/tankCreateTank/TaskPanel.ui"
  "../../../Mod/Ship/tankGZ/__init__.py"
  "../../../Mod/Ship/tankGZ/PlotAux.py"
  "../../../Mod/Ship/tankGZ/TaskPanel.py"
  "../../../Mod/Ship/tankGZ/TaskPanel.ui"
  "../../../Mod/Ship/simCreate/__init__.py"
  "../../../Mod/Ship/simCreate/TaskPanel.py"
  "../../../Mod/Ship/simCreate/TaskPanel.ui"
  "../../../Mod/Ship/simRun/__init__.py"
  "../../../Mod/Ship/simRun/Simulation.py"
  "../../../Mod/Ship/simRun/TaskPanel.py"
  "../../../Mod/Ship/simRun/TaskPanel.ui"
  "../../../Mod/Ship/simRun/clSim/__init__.py"
  "../../../Mod/Ship/simRun/clSim/initialization.py"
  "../../../Mod/Ship/simRun/clSim/Utils.py"
  "../../../Mod/Ship/simRun/Sim/__init__.py"
  "../../../Mod/Ship/simRun/Sim/initialization.py"
  "../../../Mod/Ship/simRun/Sim/matrixGen.py"
  "../../../Mod/Ship/simRun/Sim/computeSources.py"
  "../../../Mod/Ship/simRun/Sim/fsEvolution.py"
  "../../../Mod/Ship/simPost/__init__.py"
  "../../../Mod/Ship/simPost/TaskPanel.py"
  "../../../Mod/Ship/simPost/TaskPanel.ui"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/Ship.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)