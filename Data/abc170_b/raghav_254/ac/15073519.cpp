#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define pii pair<int,int>
#define ff first
#define ss second
#define N 10000005
#define INF 10000000000000
using namespace std;
const int mod=1e9+7;
void need_for_speed(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
}
int32_t main(){
need_for_speed();
int a,b;
cin>>a>>b;
int y;
if((b-2*a)>=0 and (b-2*a)%2==0 ){
y=(b-2*a)/2;
if(a-y>=0){
cout<<"Yes"<<endl;
return 0;
}
cout<<"No"<<endl;
return 0;
}
cout<<"No"<<endl;
return 0;
return 0;
}
