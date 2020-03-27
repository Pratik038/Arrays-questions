// Simple CPP program to find first non-repeating element. 
#include <bits/stdc++.h> 
using namespace std; 
  
int firstNonRepeating(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        int j; 
        for (j = 0; j < n; j++) 
            if (i != j && a[i] == a[j]) 
                break; 
        if (j == n) 
            return a[i]; 
    } 
    return -1; 
} 
  
int main() 
{ 
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i]; 
    cout << firstNonRepeating(a, n);
	cout<<endl;
}
    return 0; 
} 
