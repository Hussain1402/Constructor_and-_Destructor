#include<iostream>
using namespace std;
class date{
    int d;
    int m;
    int y;
    
    
    public:
    date(){
        cout<<"Enter the day: ";
        cin>>d;
        cout<<"Enter the month: ";
        cin>>m;
        cout<<"Enter the year: ";
        cin>>y;
        cout<<"Toda's date is: "<<endl;
        cout<<d<<"/"<<m<<"/"<<y;
    }
};

int main(){
    date today;
    return 0;
}

/*
Enter the day: 4
Enter the month: 9
Enter the year: 2024
Toda's date is: 
4/9/2024
*/
