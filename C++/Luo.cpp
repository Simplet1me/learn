#include<bits/stdc++.h>
using namespace std;
int main() {
	int n=0;
	float s,l=0;
	cin>>s;
	for (float i = 2; l <= s; i = i*0.98){
		l += i;
		n++;
	}
	cout<<n;
}