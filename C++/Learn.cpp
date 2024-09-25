#include <iostream>
using namespace std;
struct score
{
    int chinese;
    int math;
};
struct Student
{
    string name;
    int age;
    score m;
};
void age(Student p){
    //p->age=100;
    p.age = 100;
}
int main(){
    struct Student s1;
    s1.age = 10;
    cout<<s1.age;
    age(s1);
    cout<<s1.age;
    return 0;
}