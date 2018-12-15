/*
ID:f1426721
LANG:C++
TASK:ride
*/
#include<string>
#include<iostream>
using namespace std;
int main ()
{
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
	string s,g;
	long long sf=1,gf=1;
	cin>>s>>g;
	for (int i=0; i<s.length(); ++i)
		sf*=s[i]-64;
	for (int i=0; i<g.length(); ++i)
		gf*=g[i]-64;
	sf%=47;
	gf%=47;
	if (sf==gf) cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
