#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(b%a == 2 || (b%4)%2 == 0 && (b/4)+(b%4)/2 == a || (b%2 == 0)&& b/2 == a ||(b%4 == 0) && b/4 == a){
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}
