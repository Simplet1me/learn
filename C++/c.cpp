#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int score;
    void create(){
        name = "Simple Time";
        age = 19;
        score = 666;
    }

    void printfif(){
        cout<<"name:"<<this->name<<endl
            <<"age:"<<this->age<<endl
            <<"score:"<<this->score;
    }
};

int main(){
    Student s1;
    s1.create();
    s1.printfif();
}