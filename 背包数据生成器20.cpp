#include<cstdlib>
#include<ctime>
#include<fstream>
#include<iostream>
//#define _debug
using namespace std;

int main ()
{
	int n;
	cin>>n;
	srand(time(0));
	ofstream fout; 
	fout.open("data.txt",ios_base::out);
	fout<<n<<" "<<n*2<<"\n";
	for (int i=1; i<n*2+1; ++i)
	{
		fout<<" "<<rand()%(n/2)+1;
	}
	fout.close();
	return 0;
}

