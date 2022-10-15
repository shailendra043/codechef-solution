#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float k=log(n)/log(4);
	cout<<k<<endl;
	int s=k;
	for(int i=1;i<s;i++)
	{
		if(s%i==0)
		cout<<"yes"<<endl;
		else
	cout<<"no";
}
