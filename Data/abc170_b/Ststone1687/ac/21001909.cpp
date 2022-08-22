#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int a,b;
cin >> a >> b;
if(b<=4*a&&b>=2*a&&!(b%2))cout<<"Yes";
else cout<<"No";
}
