#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    string a1,b1;
    cin>>a1>>b1;
    for (int i = 0; i < b1.size(); i++){
        if (b1[i] >= '0' && b1[i] <= '9'){
            //cout<<b1.at(i)<<endl;
            char d[] = {b1[i]};
            int a = atoi(d);
            /*
            if (a >= 0 && a <= 9){
                cout<< 000 <<endl;
            }
            */
            b1[i] = a1[a];
        }
    }
    cout<<b1<<endl;
    return 0;
}