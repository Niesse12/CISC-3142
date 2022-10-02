
//were using vector so include vector
#include <iostream>
#include <vector>

//by using "using" we dont need std
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    //10 int elements in vector
    vector<int> vectors = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    //from beginning of vector to end/iteration each number is doubled 
    for(auto num=vectors.begin(); num<vectors.end(); num++){
        *num=*num<< 1;
    }
    
    //prints out all doubled values in one line seperated by spaces
    for(auto x:vectors){
        cout << x << " ";
    }
    cout << endl;
   

    return 0;
}
