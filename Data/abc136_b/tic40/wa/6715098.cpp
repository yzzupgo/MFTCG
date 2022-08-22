#include <bits/stdc++.h>
using namespace std;
#define FOR(i,m,n) for(int i = m; i < n; i++)
int main() {
int n,ans=0;
cin>>n;
FOR(i,1,n){if(to_string(i).size()%2==1)ans++;}
cout << ans <<endl;
}
