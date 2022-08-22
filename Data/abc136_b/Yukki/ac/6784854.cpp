#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
int main() {
int n;cin>>n;
int count=0;
string s;
for (int i = 1; i <=n ; i++)
{
s=to_string(i);
if (s.size()%2!=0)
{
count++;
}
}
cout<<count<<endl;
}
