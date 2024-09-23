#include <iostream>
#include <string>
using namespace std;
int main(){
    long long a,b,x,re;
    cin>>a>>b>>x;
    re = a;
    for (size_t c = 0; c < b-1; c++){
        re = re*a;
    }
    //re = pow(a,b);
    cout<< re <<endl;
    string str = to_string(re);
    string ans;
    for (size_t i = x; i > 0 ; i--){
        ans.append({str[str.size()-i]});
        //cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}
