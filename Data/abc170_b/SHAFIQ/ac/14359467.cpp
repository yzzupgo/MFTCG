#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(b%2 || b < a*2 || a*4<b)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}
