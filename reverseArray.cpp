#include <bits/stdc++.h>
using namespace std;

string reverseword(string str);

int main(){

	int t;
	cin>>t;



	while(t--){

		string s;

		cin>>s;

		cout<<reverseword(s)<<endl;

	}


}

string reverseword(string str){

	int j=str.length();
	char temp;


	for(int i=0;i<(str.length()/2);i++){

		temp=str[i];
		str[i]=str[j-1];
		str[j-1]=temp;

		j--;
		

	}

	return str;
}