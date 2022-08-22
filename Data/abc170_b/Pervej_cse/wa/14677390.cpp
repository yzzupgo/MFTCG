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
for(int i=0 ; i<=x ; i++){
if((i*4 + (x-i)*2)==y){
cout << "YES" << endl;
return;
}
}
cout << "NO" << endl;
return;
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
