#include <iostream>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n-1;i++) cin>>a[i];
	    int sum=n*(n+1)/2,sum1=0;
	    for(int i=0;i<n-1;i++)
	        sum1+=a[i];
	    cout<<sum-sum1<<endl;
	}
	return 0;
}
