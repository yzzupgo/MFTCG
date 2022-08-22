#include<iostream>
using namespace std;
int main()
{
int n; cin>>n;
string s;
long long int ans=0;
for (int i=1 ;i<=n; i++){
s=to_string(i);
if (s.size()%2!=0) ans++;
}
cout<<ans;
}
