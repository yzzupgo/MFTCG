#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
#define repd(i,a,b) for (int i=(a);i<(b);i++)
typedef long long ll;
using namespace std;
int main() {
int n;cin>>n;
int num = 0;
repd(i,1,n+1){
string s = to_string(i);
if(s.size()%2!=0)num++;
}
cout<<num<<endl;
}
