//Parameterized_constructor
#include<iostream>
using namespace std;
class Pconstruct{
    int a,b;
    
    
    public:
    Pconstruct(int m,int n){
        a=m;
        b=n;
    }
    void display(){
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};

int main(){
    int x,y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    Pconstruct p1(x,y);
    p1.display();
    return 0;
}

/*
Enter the value of x and y: 5 7
a=5
b=7
*/
