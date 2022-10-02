

#include <iostream>

//we will be using input, output, and endl
using std::endl;
using std::cin;
using std::cout;


int main(){
    //declare variables for year, price, and rate. price and rate has to be double because cents and percentage
    int year;
    double price;
    double rate;
    
    // prompt the user for input which goes into the variables
    cout<<"Enter the cost of the item: "<<endl;
    cin>>price;
    cout<<"Enter the number of years until item is purchased: "<<endl;
    cin>>year;
    cout<<"Enter the rate as a percentage: "<<endl;
    cin>>rate;
    
    //converts percentage to fraction
    rate=rate/100;
    
    //current year dont count so initial is set as 2 and so on.
    for(int i=2; i<=year;i++){
        //the total price is price multiplied by the rate of each yr and all of those prices added together from each year(iteration)
        price+=price *rate;
    }
    
    //prints out the final/total price
    cout<<"The final price is: "<<+price<<endl;
    
    return 0;
}
