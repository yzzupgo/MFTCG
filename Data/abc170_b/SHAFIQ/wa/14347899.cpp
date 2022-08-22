#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(b%a == 2 || b/2 == a){
cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
return 0;
}
