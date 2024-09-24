#include<iostream>
using namespace std;
int main(){
    for (size_t i = 1; i < 10; i++){
        for (size_t j = 1; j <= i; j++){
            cout<<j<<"X"<<i<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    
}