//we are using vectors and strings so include them
#include <iostream>
#include <string>
#include <vector>
//using "using", we dont need to use std
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main(){
    
    //declare string and vector
    string words;
    vector<string> vectors;
    
    //user input goes into the vector
    while (cin >> words){
        vectors.push_back(words);
    }

    //changes to uppercase all characters
  for (auto &x : vectors){
    for (auto &c : x){
        c = toupper(c);
    }  
  }
    
    //prints the 8 words to a line
  for (decltype(vectors.size()) i=0; i<vectors.size(); i++)
  {
    if (i%8 == 0) cout << endl;
    cout << vectors[i] << " ";
  }
  
  cout << endl;

  return 0;
}