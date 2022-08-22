#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define endl '\n'
#define first F
#define second S
typedef long long ll;
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);
int x, y; cin>>x>>y;
for(int i=1; i<=x; i++){
int b = x-i;
if(2*i + 4*b == y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
