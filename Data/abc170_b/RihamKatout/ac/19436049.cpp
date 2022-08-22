#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int a,s;
cin>>a>>s;
if(a*4>=s&&a*2<=s&& !(s&1))cout<<"Yes";
else cout<<"No";
return 0;
}
