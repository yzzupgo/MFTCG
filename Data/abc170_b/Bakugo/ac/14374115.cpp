#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios_base::sync_with_stdio(0); cin.tie(0);
int x,y;
cin>>x>>y;
bool check = false;
for(int i=1;i<=x;++i){
int left = x - i;
if(2*i + 4*left ==y || 4*i + 2*left ==y) check = true;
}
cout<<(check? "Yes" : "No");
return 0;
}
