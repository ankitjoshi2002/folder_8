#include<bits/stdc++.h>
using namespace std;

void series (int n)
{
	if(n == 1)
	{
		cout<<2<<" ";
		return ;
	}
	

	series(n-1);
	cout<<(pow(n , n) + n) << " " ;
}

int main()
{
	int n ; 
	cout<<"enter the value of n :";
        cin>>n ;

	cout<<" Series  " ;
	series(n);
	return 0;
}
