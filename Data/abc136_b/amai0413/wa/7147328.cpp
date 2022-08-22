#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
int main() {
int n,count=0; cin>>n;
for(int i=0;i<n;i++) {
if (int(log10(i))%2!=1) count++;
}
if(int(log10(n))%2==1) count++;
cout << count << endl;
return 0;
}
