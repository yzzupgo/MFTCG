#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define endl "\n"
#define all(aa) aa.begin(), aa.end()
const lli INF = LLONG_MAX;
int main(){
int x, y;
cin>>x>>y;
bool f=0;
for(int i = 0; i <= x; i++){
if((y-i*2)%4==0) f=1;
}
cout<<(f? "Yes":"No")<<endl;
}
