//union of an array
#include <iostream>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n,m,ans=0,max=-1;
	    cin>>n>>m;
	    int a[n+m];
	    for(int i=0;i<n+m;i++)
	    {   cin>>a[i];
	        if(a[i]>max) max=a[i];
	    } 
	    int h[max+1]={};
	    for(int i=0;i<n+m;i++){
	        h[a[i]]++;
	        if(h[a[i]]<2) ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
