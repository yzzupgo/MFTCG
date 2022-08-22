#include<iostream>
using namespace std;
int main()
{
long long int a,b,p;
cin>>a>>b;
p=(4*a-b);
if(p%2==0&&p>=0&&p<=b)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
