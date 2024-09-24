#include <iostream>
using namespace std;
int main(){
    int a[]={2,4,0,5,7,1,3,8,9};
    int len = sizeof(a)/sizeof(a[0]);
    int temp;
    for (size_t i = 0; i < len; i++){
        cout<<a[i]<<" ";
    }
    
    for (size_t j = 0; j < len-1; j++){
        for (size_t i = 0; i < len-j-1; i++){
            if (a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            }
        }
    }
    cout<<endl;
    for (size_t i = 0; i < len; i++){
        cout<<a[i]<<" ";
    }  
    
      
    
}