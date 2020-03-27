#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        printDuplicates(a, n);
        cout << endl;
    }
    return 0;
}
void printDuplicates(int a[], int n) {
    int max=-1;
    bool is=false;
    
	for(int i=0;i<n;i++)
        if(a[i] > max)
            max=a[i];
    int h[max+1]={};
    
	for(int i=0;i<n;i++)
        h[a[i]]++;
    
	for(int i=0;i<max+1;i++)
        if(h[i]>1)
            {cout<<i<<" ";
             is=true;
            }
    if(!is)
        cout<<-1;
}
