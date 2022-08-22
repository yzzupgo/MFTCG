#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
int main() {
int n;cin>>n;
int count=0;
for (int i = 1; i <=n ; i++)
{
count++;
if (9<i<99||999<i<9999||99999<i<999999)
{
count--;
}
}
cout<<count<<endl;
}
