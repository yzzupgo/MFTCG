#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main (){
int a,b;
int ans;
cin>> a>> b;
ans=max(a+b,a-b);
ans=(ans,a*b);
cout << ans << endl;
return 0;
}
