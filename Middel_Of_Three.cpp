#include<bits/stdc++.h>
using namespace std;

class middelOfThree
{
public:

	int middle(int A,int B,int C){

		if((A>B && A<C)||(A<B && A>C)){
			return A;
		}
		else if((B>A && B<C)||(B>C && B<A)){
			return B;
		}
		else{

			return C;
		}
	}
	
	
};


int main()
{
	
	middelOfThree m;

	int t;
	cin>>t;
	int a,b,c;

	while(t--){
		cin>>a;
		cin>>b;
		cin>>c;

		cout<<m.middle(a,b,c);

		cout<<endl;
	}

   

	return 0;
}