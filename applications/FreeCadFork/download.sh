#!/bin/bash
echo -e "Setting correct directories...\n"
cd $HOME/the-technocopia-project
echo -e "Executing command: 'git pull origin master'...\n"
git pull origin master
echo -e "Finished. You may now upload changes if you want.\n"
