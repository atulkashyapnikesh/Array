#include<bits/stdc++.h>
using namespace std;

int sum_subarray(int *arr,int n){

    int meh=0;
    int mef=INT_MIN;
	for(int i=0;i<n;i++){
		meh=meh+arr[i];
		if(meh<arr[i])
			meh=arr[i];
		if(mef<meh)
			mef=meh;
	}

	return mef;

}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		cout<<sum_subarray(arr,n)<<endl;



	}
}