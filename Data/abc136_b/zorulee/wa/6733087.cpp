#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans = 0;
for(int i=1;i<10 && i<=n;++i) ++ans;
for(int i=100;i<1000 && i<=n;++i) ++ans;
for(int i=10000;i<=100000 && i<=n;++i) ++ans;
cout << ans <<endl;
return 0;
}
