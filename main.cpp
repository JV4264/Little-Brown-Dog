// Justin Vasquez and Anthony Yannella
#include "tools.hpp"
//----------------------------------------------------------
int main() {
//-------------------------------
  banner(); //Name Out
//----------------------------- //Declared variables
  ofstream fixed;
  vector<string> dogLine;
  ifstream dogFile;
  dogFile.open("p3-BrownDog.txt");
  fixed.open("sorted.txt");
  string dogTxt;

//-------------------------------
  while(dogFile){
    getline (dogFile, dogTxt);
    dogLine.push_back(dogTxt);
    sort(dogLine.begin(), dogLine.end());
}

  for(int wow = 0; wow < dogLine.size(); wow++){
    cout << dogLine[wow] << "\n";
    fixed << dogLine[wow] << "\n";
  }
 
  dogFile.close();
//------------------------------
  bye();// End of code
}
/*--------------------------------------------------------
    P3: Little Brown Dog
    Justin Vasquez and Anthony Yannella
    CS 2212-01
    Thu Mar  24 2022 16:52:15
----------------------------------------------------------*/
