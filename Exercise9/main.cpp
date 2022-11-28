#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <numeric>
using namespace std;

double mavg(double a, double b, double c){
    return (a+b+c)/3;
}  

int main(){
    vector<string>month;
    vector<int>temp;
    vector<double>movingavg;
    vector<double>weightavg;
    ifstream file("weather.txt");
    ofstream output;
    string mon;
    string line;
    string t;
    getline(file, line);
    //read in
    while(!file.eof()){
        getline(file, mon, ',');
        month.push_back(mon);
        getline(file, t, '\n');
        temp.push_back(stoi(t));
        
    }
    

    //simple average
    output.open("output.txt");
    double average=accumulate(temp.begin(),temp.end()-1,0)/9;
    output<<"simple average: "<<average<<endl;
    
    //moving average
    for(int i=0;i<2;i++){
        movingavg.push_back(0);
    }
    for(int i=2;i<month.size();i++){
        double n=mavg(temp[i-2],temp[i-1],temp[i]);
        movingavg.push_back(n);
    }
    
    //weighted average
    for(int i=0;i<2;i++){
        weightavg.push_back(0);
    }
    for(int i=2;i<month.size();i++){
        double weight1=temp[i-2]*1;
        double weight2=temp[i-1]*2;
        double weight3=temp[i]*3;
        double wavg=(weight1+weight2+weight3)/6;
        weightavg.push_back(wavg);
    }
    
    //read out
    output<<"Month"<<"     Temperature"<<"     Moving average"<<"     Weighted average"<<"\n";
    for(int i=0;i<month.size()-1;i++){
        output<<month[i]<<"           "<<temp[i]<<"               "<<movingavg[i]<<"               "<<weightavg[i]<<"\n";
    }
    output.close();
    
    
    return 0;
}

