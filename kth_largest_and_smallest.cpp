#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,n;
	cin>>k>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<"largest:"<<a[n-k]<<endl;
	cout<<"smallest:"<<a[k-1];
	return 0;
}
