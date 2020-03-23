#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cnt0=0,cnt1=0,cnt2=0;
	cin>>n;
	int a[n];//array consists of 0,1 and 2.
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
			cnt0++;
		else if(a[i]==1)
			cnt1++;
		else
			cnt2++;
	}
	int j=0;
	while(cnt0--) a[j++]=0;
	while(cnt1--) a[j++]=1;
	while(cnt2--) a[j++]=2;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
