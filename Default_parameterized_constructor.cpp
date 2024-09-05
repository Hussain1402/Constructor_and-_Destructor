//Default_parameterized_constructor
#include<iostream>
using namespace std;
class Construct{
    int a,b;
    
    
    public:
    Construct(){
        a=10;
        b=30;
    }
    void display(){
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};

int main(){
    Construct c1;
    c1.display();
    return 0;
}

/*
a=10
b=30
*/
