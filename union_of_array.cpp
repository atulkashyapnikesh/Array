// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
       
        for(int i = 0;i<n;i++)
           cin >> a[i];
           
        for(int i = 0;i<m;i++)
           cin >> b[i];
       
        cout << doUnion(a, n, b, m) << endl;
        
    }
    
    return 0;
}// } Driver Code Ends


//User function template in C++

// a and b : given array with n and m size respectively

int doUnion(int a[], int n, int b[], int m)  {
    
    vector<int>v(100000);
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }
    for(int i=0;i<m;i++){
        v[b[i]]++;
    }
    
    int len=0;
    vector<int>::iterator itr;

    for(itr=v.begin();itr!=v.end();itr++){

        if(*itr!=0)
            len++;
    

    }



    
    return len;
    }
    
