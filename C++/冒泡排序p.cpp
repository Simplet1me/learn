#include <iostream>
using namespace std;

void swap(int * p1,int len){
    for (size_t j = 0; j < len-1; j++){
        for (size_t i = 0; i < len-j-1; i++){
            if (p1[i] > p1[i+1]){
                int temp = p1[i];
                p1[i] = p1[i+1];
                p1[i+1] = temp;
            }
        }
    }
}

int main(){
    int a[]={2,4,0,5,7,1,3,8,9};
    int len = sizeof(a)/sizeof(a[0]);
    for (size_t i = 0; i < len; i++){
        cout<<a[i]<<" ";
    }
    swap(a,len);
    cout<<endl;
    for (size_t i = 0; i < len; i++){
        cout<<a[i]<<" ";
    }  
}