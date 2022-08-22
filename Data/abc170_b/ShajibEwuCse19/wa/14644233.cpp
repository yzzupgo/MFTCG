#include <bits/stdc++.h>
using namespace std;
int main()
{
int animal,leg;cin>>animal>>leg;
for(int i=0;i<=animal;i++)
{
int x=2*i;
int y=(animal-i)*4;
if(x+y==leg)
{
cout<<"YES"<<endl;return 0;
}
}
cout<<"NO"<<endl;
}
