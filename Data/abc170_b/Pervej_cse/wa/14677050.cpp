#include<bits/stdc++.h>
using namespace std;
#define CIN ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define TEST_CASE(t) for(int zz=1 ; zz<=t ; zz++)
#define PRINT_CASE printf("Case %d: ",zz)
#define Debug(x) cout<<#x " = "<<(x)<<endl
const int maxn = (int)3e5+5;
typedef long long ll;
void solve(){
int x, y;
cin >> x >> y;
if(x>=y || 2*x<y || y&1){
cout << "NO" << endl;
return;
}
if(x*2==y || x*4==y){
cout << "YES" << endl;
return;
}
y -=(x*2);
int baki = y/2;
if(baki <= x){
cout << "YES" << endl;
}else cout << "NO" << endl;
}
int main()
{
CIN
int t=1;
while(t--){
solve();
}
return 0;
}
