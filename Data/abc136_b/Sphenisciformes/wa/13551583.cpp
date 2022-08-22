#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fr(i,n) for(int i=0;i<(n);++i)
#define Fr(i,n) for(int i=1;i<=(n);++i)
#define ifr(i,n) for(int i=(n)-1;i>=0;--i)
#define iFr(i,n) for(int i=(n);i>0;--i)
int main(void) {
int n;cin>>n;
int c = 0;
int m = n;
while(m){
m /= 10;
c++;
}
int ans = 0;
for(int i = 1; i < c; i += 2) {
ans += (int)pow(10, i) - (int)pow(10, i-1);
}
ans += n-(int)pow(10, c-1) + 1;
cout << ans << endl;
return 0;
}
