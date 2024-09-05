#include<iostream>
using namespace std;
class date{
    int d;
    int m;
    int y;
    
    public:
    date(){
        cout<<"Toda's date is: "<<endl;
        d=4;
        m=9;
        y=2024;
        cout<<d<<"/"<<m<<"/"<<y;
    }
};

int main(){
    date today;
    return 0;
}

/*
Toda's date is: 
4/9/2024
*/
