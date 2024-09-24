#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a[x][y];
    int x = sizeof(a)/sizeof(a[0]);
    //cout<<len;
    for (size_t i = 0; i < x; i++){
        for (size_t j = 0; j < y; j++){
            a[i][j] = 1;
        }
    }
    for (size_t i = 0; i < x; i++){
        for (size_t j = 0; j < y; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}