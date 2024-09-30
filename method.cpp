#include <iostream>
using namespace std;
class Student {
    public:
    void method() {
        cout << "I am in second year.";
    }
};
int main() {
    Student s1; 
    s1.method(); 
    return 0;
}
/*
I am in second year.*/
