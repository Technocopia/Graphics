#!/bin/bash
echo -e "Setting correct directories...\n"
cd $HOME/the-technocopia-project
echo -e "Executing command 'git add HandE'...\n"
git add /HandE
echo -n "SHORT description of changes: "
read text
echo -e "Executing command 'git commit'...\n"
git commit -am "$text"
echo -e "Executing command 'git push origin master'...\n"
git push origin master
echo -e "Finished uploading. Please tell everyone to run download.sh script."
