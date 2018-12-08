#include<iostream>
//#define _debug
using namespace std;
long long t[10010],m[10010]={0,1,1};
long long f(long long n)
{
	++t[n];
	return m[n]?m[n]:m[n]=f(n-2)+f(n-1);
}
int main ()
{
	long long n;
	cin>>n;
	cout<<f(n)<<endl;
	for (int i=n;i;--i)cout <<t[i]<<endl;
	return 0;
}

