#include <bits/stdc++.h>
using namespace std;

void rotate(int [],int,int);

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d;
        cin>>d;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        rotate(arr,n,d);
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
	
	return 0;
}

void rotate(int arr[],int n,int d){
    
    int k=n-d-1;
    
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
*-