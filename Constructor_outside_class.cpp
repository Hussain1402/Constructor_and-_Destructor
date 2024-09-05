#include<iostream>
using namespace std;
class student{
    int prn;
    char name[50];
    double fee;
    
    public:
    student();
    void display();
};
student::student(){
    cout<<"ENter PRN: ";
    cin>>prn;
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the Fee: ";
    cin>>fee;
}
void student::display(){
    cout<<endl<<prn<<"\t"<<name<<"\t"<<fee;
}

int main(){
    student s;
    s.display();
    return 0;
}

/*
ENter PRN: 061
Enter the Name: Hussain
Enter the Fee: 7000

61	Hussain	7000
*/
