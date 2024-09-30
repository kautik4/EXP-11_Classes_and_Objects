#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    string name,branch,year;
    float age,result;
    void display(){
         cout<<"Name: "<<name<<endl;
         cout<<"Branch: "<<branch<<endl;
         cout<<"Year: "<<year<<endl;
         cout<<"Age: "<<age<<endl;
         cout<<"Result: "<<result<<endl;
    }
};

int main(){
    Student s1;
    s1.name="Aditya Sthawarmath";
    s1.branch="EnTC";
    s1.year="Second";
    s1.age=19.0;
    s1.result=8.64;
    s1.display();
    Student s2;
    s2.name="Adrish Purkayastha";
    s2.branch="EnTC";
    s2.year="Second";
    s2.age=20.0;
    s2.result=9.03;
    s2.display();
}
/*
Name: Kautik Verma
Branch: EnTC
Year: Second
Age: 19
Result: 7.5
*/
