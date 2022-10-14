

#include <iostream>
#include <fstream> //for reading file from outside

using namespace std;

int main(){
    ifstream theFile("coordinates.txt");
    int x, y;
    while(theFile>>x>>y){ // prints out whats in the outside file by iterating through each line
        cout<<x<<", "<<y<<endl;
    }

    return 0;
}
