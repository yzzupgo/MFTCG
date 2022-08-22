#include<bits/stdc++.h>
#include<unordered_map>
#include<string>
#include<map>
#include<algorithm>
typedef long long int ll;
using namespace std;
#define MAXN 10001
#define MOD 1000000007
#define X first
#define Y second
ll t,n,i,j;
int main()
{
cin>>n;
ll c=n,cnt=0;
while(n>0){
n=n/10;
cnt++;
}
if(cnt==1)
cout<<c<<endl;
else if(cnt==2)
cout<<"9"<<endl;
else if(cnt==3)
cout<<(9+c-100+1)<<endl;
else if(cnt==4)
cout<<"909"<<endl;
else if(cnt==5)
cout<<(c-10000+910)<<endl;
else
cout<<"90909"<<endl;
}
