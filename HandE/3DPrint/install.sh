#!/bin/bash

clear
echo -e "Creating backup of original files...\n"
cd $HOME/the-technocopia-project/third-party/free-cad/src/Gui
mv CommandDoc.cpp BACKCommandDoc.cpp
mv Workbench.cpp BACKWorkbench.cpp
rm Workbench.cpp
rm CommandDoc.cpp
echo -e "Copying new files over..."
cd $HOME/the-technocopia-project/HandE/3DPrint
cp CommandDoc.cpp $HOME/the-technocopia-project/third-party/free-cad/src/Gui
cp Workbench.cpp $HOME/the-technocopia-project/third-party/free-cad/src/Gui
echo -e "Running CMake and Make...\n"
cd $HOME/the-technocopia-project/third-party/free-cad-build
cmake ../free-cad
make
cd $HOME/the-technocopia-project/HandE/3DPrint
cp -r /NeuronRobotics $HOME/the-technocopia-project/third-party/free-cad-build/src
