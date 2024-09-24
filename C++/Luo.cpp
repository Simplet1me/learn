#include <iostream>
using namespace std;
int main(){
    int a[]={2,4,0,5,7,1,3,8,9,};
    int len = sizeof(a)/sizeof(a[0]);
    for (size_t i = 0; i < len; i++){
        cout<<a[i]<<" ";
    }

}