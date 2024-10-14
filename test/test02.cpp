#include<iostream>
#include<math.h>
using namespace std;

int balance(int up,int down,int left,int right,int center){
    int a = ceil((up+down+left+right+center)/5.0);
    return a;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int ans[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j] = arr[i][j];
        }
    }
    
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            ans[i][j] = balance(arr[i-1][j],
                                arr[i+1][j],
                                arr[i][j-1],
                                arr[i][j+1],
                                arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}