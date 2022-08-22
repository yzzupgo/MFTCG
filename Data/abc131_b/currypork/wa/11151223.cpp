#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); ++i)
int main() {
int a,b,c;
cin>>a>>b;
c=a*(a+1)/2+(b-1)*a;
if(b<0&&a+b>0)cout<<c;
else if(b<0)cout<<c-b+a-1;
else cout<<c-a+b;
}
