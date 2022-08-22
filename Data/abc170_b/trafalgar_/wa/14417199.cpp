#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define eb emplace_back
#define ll long long
#define nl '\n'
#define in() ( { int a ; scanf("%d",&a); a; } )
const int N = 3e5 + 9;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
int x, y, i, j;
cin >> x >> y;
if(y == (x*4)|| y == (x*2)) cout << "Yes" << endl;
else{
for(i = 1; i < x; i++){
for(j = 1; j <= x-i; j++){
if(y == (i*4 + j*2)){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
}
