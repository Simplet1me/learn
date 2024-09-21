#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int m,t,s;
    cin>>m>>t>>s;
    if (t == 0){
        cout<<0;
    }
    else if (s%t==0){
    float ans = m-ceil(s/t);
    cout<<dec<<ans;
    }
    else{
    float ans = m-ceil(s/t)-1;
    cout<<dec<<ans;
    }
    return 0;
}