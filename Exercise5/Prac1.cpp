
#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a positive number: "<<endl; //ask user for the number
    cin>>num;
    int sum=0;
    int r; //remainder
    while(num>0){ // iterates throught the number, adds the digits
        r=num%10;
        sum=sum+r;
        num=num/10;
        
    }
    cout<<"Sum of digits of the number is: "<<sum; //prints out the sum all digits
    return 0;

 
}
