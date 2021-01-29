#include<bits/stdc++.h>
using namespace std;

int main(){

     vector<int>v1,v2;

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]>0)
			v1.push_back(arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]<0)
			v1.push_back(arr[i]);
	}

	cout<<v1.size()<<endl;
	
	vector<int>::iterator itr;
	for(itr=v1.begin();itr!=v1.end();itr++)
		cout<<*itr<<" ";




}