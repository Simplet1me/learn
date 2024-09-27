#include <iostream>
#include <math.h>
using namespace std;
/*
bool isPrime(int num)
{
     int tmp=sqrt(num);
     for(int i=2;i<=tmp;i++)
        if(num%i==0)
          return 0;
     return 1;
}
*/

int main(){
    int n=0,l,p=0;
    cin>>l;
    for (int i = 2; i <= l; i++){
        int tmp = sqrt(i);
        for (int j = 2; j < tmp; j++){
            if(i%j!=0){break;}     
        }
        p += i;
        if (p <= l){
            cout<<i<<endl;
            n++;
        }
    }
    cout<<n<<endl;
    return 0;
}