#include <bits/stdc++.h>
using namespace std;
int main() {
int n,ans=0;
cin>>n;
for(int i=1; i<=n; i++) if(to_string(i).size()%2==1)ans++;
cout << ans <<endl;
}
