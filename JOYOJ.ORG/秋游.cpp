#include<iostream>
#include<cmath>
using namespace std;
int main () {
  int n,s=0;
  cin>>n;
  for (int i=0;i<n;++i)
  {
    int j;
    cin>>j;
    s+=j+2;
  }
  cout<<ceil(s/36.0);
  return 0;
}
