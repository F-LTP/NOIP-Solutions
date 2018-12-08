#include<iostream>
//#define _debug
using namespace std;
long long f(int n)
{
	return n==1?1:n*f(n-1);
}
int main ()
{
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}

