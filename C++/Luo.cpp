#include<bits/stdc++.h>
using namespace std;
int a[3],k;
int main() 
{
    int n;
	cin>>n;
    int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
        cout<<a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i])
			{
				k++;
			}
		}
		cout<<k<<" ";
		k=0;
	}
	return 0;
}