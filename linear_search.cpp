#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;//(input number ,size of array)
	cin>>n>>m;
	int a[m];
	bool found=false;
	for(int i=0;i<m;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		if(a[i]==n)
			found=true;
	if(found)
		cout<<"TRUE";
	else
		cout<<"FALSE";
	return 0;
}
