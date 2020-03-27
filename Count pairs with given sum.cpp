#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
		int t; cin>>t;
	while(t--){
	    int n,k,ans=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++)
	        for(int j=i+1;j<n;j++){
	            if(a[i] + a[j] == k)
	                ans++;
	        }
	    cout<<ans<<endl;
	}
	return 0;
}
