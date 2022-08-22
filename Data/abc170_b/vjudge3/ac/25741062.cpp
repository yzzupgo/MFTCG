#include <bits/stdc++.h>
using namespace std;
#define MAXN 1050
#define INF 999999999
#define ll long long
#define endl "\n"
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x, y;
bool ans = false;
cin >> x >> y;
for(int i = 0; i <= x; i++){
if(i*4 + (x-i)*2 == y){
ans = true;
break;
}
}
if(ans) cout << "Yes\n";
else cout << "No\n";
}
