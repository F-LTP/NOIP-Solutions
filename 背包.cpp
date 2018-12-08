#include<fstream>
#include<iostream>
//#define _debug
#define MAX(A,B) A>B?A:B
using namespace std;
int o[71][2],n,t[70];
int p(int i,int w)
{
	int v;
	if (i==n) v=0;
	else if (w<o[i][0]) v=p(i+1,w);
	else v=MAX(p(i+1,w),p(i+1,w-o[i][0])+o[i][1]);
	++t[i];
	return v;
}
int main ()
{
	ifstream fin;
	fin.open("data.txt",ios_base::out);
	int w;
	fin>>n>>w;
	for (int i=0;i<n;++i)
	fin>>o[i][0]>>o[i][1];
	cout<<p(0,w);
	for(int i=0;i<n;i++)
	{
		cout<<t[i]<<' ';
	}
	fin.close();
	return 0;
}

