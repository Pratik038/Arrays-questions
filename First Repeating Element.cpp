#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    bool is=false;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++)
	        {for(int j=i+1;j<n;j++)
	            if(a[i]==a[j])
	            {
	                cout<<i+1;
	                is=true;
	                break;
	            }
	         if(is) break;
	        }
	    if(!is) cout<<-1;
	    cout<<endl;
	}
	return 0;
}
