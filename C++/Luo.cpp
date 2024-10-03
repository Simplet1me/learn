#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x,y;
public:
    void inputdata(){cin>>this->x>>this->y;}
    void setdata(int a,int b){
        this->x = a;
        this->y = b;
    }
    int getx(){return x;}
    int gety(){return y;}
};

class Circle
{
private:
    Point center;
    int radius;
public:
    void inputdata(int x,int y,int r){
        this->center.setdata(x,y);
        this->radius = r;
    }

    int isPointerInCircle(int px,int py){
        int s = sqrt(pow(px - center.getx(),2) + pow(py - center.gety(),2));
        if (s > radius){return 0;}
        else if (s == radius){return 1;}
        else if (s < radius){return 2;}
        return 3;
    }
};

int main(){
    Point p;
    Circle c;
    c.inputdata(5,0,5);
    p.inputdata();
    if (c.isPointerInCircle(p.getx(),p.gety()) == 0){cout<<"out";}
    else if (c.isPointerInCircle(p.getx(),p.gety()) == 1){cout<<"on";}
    else if (c.isPointerInCircle(p.getx(),p.gety()) == 2){cout<<"in";}
}