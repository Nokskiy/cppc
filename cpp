while [ 0 ]
do
  if [ -r __cppc__/f.cpp ];then rm __cppc__/f.cpp;else printf "";fi
  read -r -p "C++> " CIN
  cd __cppc__
  printf "#include <iostream>\n#include <fstream>\nusing namespace std;\nint main() { $CIN }" >> f.cpp
  g++ -o f f.cpp
  printf "\033[1;90mCompilation Returned $?\033[0m\n"
  if [ $? -eq 0 ];then ./f;else echo; fi
#  ./f
  cd ..
done
