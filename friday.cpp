/*
ID:f1426721
LANG:C++
TASK:friday
*/
#include<iostream>
using namespace std;
int main ()
{
	freopen("friday.in","r",stdin);
	freopen("friday.out","w",stdout);
	int n,ans[7]= {0},y=1900,m=1,d=1,x=1,mm[13]= {-1,31,-1,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	n+=1899; 
	while (y<=n)
	{
		++d;
		++x;
		if (x>6) x%=7;
		if (d==13) ++ans[x];
		if (m==2)
		{
			if ((!y%4 && y%100) || !y%400) mm[2]=29;
			else mm[2]=28;
		}
		if (d>mm[m])
		{
			d=1;
			++m;
		}
		if (m>12)
		{
			m=1;
			++y;
		}
	}
	cout<<ans[6]<<" ";
	for (int i=0;i<6;++i) cout<<ans[i]<<(i<5?" ":"");
	cout<<endl;
	return 0;
}

