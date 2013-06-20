#!/bin/bash

clear
echo -e "Setting correct directory...\n"
cd $HOME/the-technocopia-project/HandE/SubModules
echo -e "\n\nChoose a valid SubModule directory to be inserted to /free-cad/src/Mod\n"
echo -e "ex: Vend\n"
echo -e "CAUTION: If the submodule directory already exists within /free-cad/src/Mod, exiting SubModule will be removed and new one will be inserted."
echo -e "\n\nSubModules available:"
ls
echo -e "\n\nSubModule to add: "
read DIRECTORYNAME
if [ ! -d "$DIRECTORYNAME" ]; then
	clear
	echo -e "SubModule does not exist."
	exit
fi
cd $HOME/the-technocopia-project/third-party/free-cad/src/Mod
if [ -d "$DIRECTORYNAME" ]; then
	echo -e "\nSubModule currently exists..."
	echo -e "\nRemoving existing SubModule files..."
	rm -rf  $DIRECTORYNAME
	echo -e "\nRemoving SubModule from CMakeLists.txt..."
	sed -e "/add_subdirectory($DIRECTORYNAME)/d" CMakeLists.txt > NewCmake.txt
	rm CMakeLists.txt
	mv NewCmake.txt CMakeLists.txt
fi
echo -e "\n\nCopying SubModule -> /free-cad/src/Mod"
cp -r $HOME/the-technocopia-project/HandE/SubModules/$DIRECTORYNAME $HOME/the-technocopia-project/third-party/free-cad/src/Mod
echo -e "\nCopy complete..."
echo -e "\nEditing CMakeLists.txt to include new Submodule..."
echo "add_subdirectory($DIRECTORYNAME)" >> CMakeLists.txt
echo -e "\n\nOperation Complete. Ready to recompile."
