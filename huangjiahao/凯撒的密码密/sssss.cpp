#include<iostream>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	while(n>=26){
		n-=26;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]+n>120)s[i]=s[i]+n-26;
		else s[i]+=n;
	}
	for(int i=0;i<s.size();i++){
		cout<<s[i];
	}
} 
