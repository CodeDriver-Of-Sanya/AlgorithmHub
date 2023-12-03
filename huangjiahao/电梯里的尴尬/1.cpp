#include<iostream>
#include<algorithm>
using namespace std;
const int N=100100;
int a[N];
int main(){
	int n,k,z;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	for(int i=1;i<=n;i++){
		k=(a[i]-a[i-1])*6;
		if(k!=0)z+=5; 
		z++;
		z+=k;
	}
	cout<<z+a[n]*4;
} 
