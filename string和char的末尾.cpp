#include<iostream>
#include<string>
//#define _debug
using namespace std;
int main ()
{
	char a[10]= {-1,-1,-1,-1,-1,-1,-1};
	string b;
	cin>>a>>b;
	for (int i=0; a[i]!=-1; ++i) cout<<i<<" ";
	cout<<endl;
	cout<<b.size()<<" "<<b.length();
	return 0;
}

