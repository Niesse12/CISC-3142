

#include <iostream>

using namespace std;

int main(){
    for(int i=3;i<101;i++){ // iterates from 3 to 100
        int count=0;
        for(int x=2; x<=(i/2)+1;x++){ //check if its divisable by 2, if yes then its not prime, if not then it is prime
            if(i%x==0){ //numbers that are not prime, still count up 
                count++;
                break;
            }
        }
        if(count==0){//numbers that are prime to print out
            cout<<i<<", ";
        }
    }
    
    return 0;
}
