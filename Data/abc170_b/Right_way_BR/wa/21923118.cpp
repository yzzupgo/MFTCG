#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int div = k/n;
if(div==2 || div == 4)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
