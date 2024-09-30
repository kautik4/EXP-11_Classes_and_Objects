#include <iostream>
using namespace std;
class Student{
    public:
    void display();
};
void Student::display(){
    cout<<"I'm studying in second year.";
}
int main(){
    Student s1;
    s1.display();
}
/*
I'm studying in second year.
*/