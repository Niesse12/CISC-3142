

#include <iostream>


using namespace std;

int main(){

//declare variables
double mousesweetner;
double mouseweight;
double sweetnerdieter;
double dieterweight;
int sodacans;
const double SODASWEETNER= 0.001;

//ask user for input 
cout<<"Enter amount of Artificial Sweetner needed to kill a mouse in grams: "<<endl;;
cin>>mousesweetner;

cout<<"Enter weight of the mouse in grams: "<<endl;
cin>>mouseweight;

cout<<"Enter the weight of the dieter in grams: "<<endl;
cin>>dieterweight;

//calculate the dieters amount of sweetner that they can intake
sweetnerdieter=(mousesweetner/mouseweight)*dieterweight;

//calculate the cans of soda in grams of how many person can intake when dying. Needs sweetner amount/previous calculation to calculate.
sodacans= sweetnerdieter/SODASWEETNER;

//prints out amount of cans that would kill the dieter
cout<<"The amount of cans that would kill the dieter is: "<<+sodacans<<endl;


return 0;
}