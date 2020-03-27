#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    long long a,b,c; cin>>a>>b>>c;
	    long long ar1[a],ar2[b],ar3[c];
	    for(long i=0;i<a;i++) cin>>ar1[i];
	    for(long i=0;i<b;i++) cin>>ar2[i];
	    for(long i=0;i<c;i++) cin>>ar3[i];
	    int i = 0, j = 0, k = 0; 
        bool is=false;
     
        while (i < a && j < b && k < c) 
        { 
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) 
         {   cout << ar1[i] << " ";   i++; j++; k++;is=true; } 
         else if (ar1[i] < ar2[j]) 
             i++;
         else if (ar2[j] < ar3[k]) 
             j++;
         else
             k++;
         if(ar1[i]==ar1[i+1]) i++;
         if(ar2[j]==ar2[j+1]) j++;
         if(ar3[k]==ar3[k+1]) k++;
        }
        if(!is) cout<<-1;
	    cout<<endl;
	}
	return 0;
}
