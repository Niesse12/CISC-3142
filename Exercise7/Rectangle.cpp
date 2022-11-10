#include <iostream>

using namespace std;

class Rectangle{
    private:
        float width;
        float length;
    public:
        void setlength(float l){
            length=l;
        }

        void setwidth(float w){
            width=w;
        }

        float perimeter(){
            float perim=length+length+width+width;
            return perim;
        }

        float area(){
            float a=length*width;
            return a;
        }

        void show(){
            cout<<length<<endl;
            cout<<width<<endl;
        }

        int sameArea(Rectangle rec){
            if(area()==rec.area()){
                return 1;
            }
            else{
                return 0;
            }
        }
        
};



int main(){
    Rectangle rec1;
    Rectangle rec2;
 
    cout<<" rec2 length and width"<<endl;
    rec2.setlength(18.9);
    rec2.setwidth(5);
    rec2.show();
    cout<<" rec2 perimeter"<<endl;
    cout<<rec2.perimeter()<<endl;
    cout<<"rec2 area "<<endl;
    cout<<rec2.area()<<endl;
    
    cout<<"    "<<endl;
    
    cout<<" rec1 length and width"<<endl;
    rec1.setlength(15);
    rec1.setwidth(6.3);
    rec1.show();
    cout<<" rec1 perimeter"<<endl;
    cout<<rec1.perimeter()<<endl;
    cout<<"rec1 area "<<endl;
    cout<<rec1.area()<<endl;
    
    cout<<"This is the result, if its 0 they are not equal and if its 1 then they are."<<endl;
    cout<<rec1.sameArea(rec2)<<endl;
    
    return 0;
    
    /* Output:
        rec2 length and width
        18.9
        5
        rec2 perimeter
        47.8
        rec2 area 
        94.5
    
        rec1 length and width
        15
        6.3
        rec1 perimeter
        42.6
        rec1 area 
        94.5
        This is the result, if its 0 they are not equal and if its 1 then they are.
        1
    */
    
}
