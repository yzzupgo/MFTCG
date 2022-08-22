#include <bits/stdc++.h>
#define rep2(i,x,y) for (int i = x; i <= (y); ++i)
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
int INF = 100100101;
int main()
{
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int x,y;
cin >> x >> y;
if(y % 2 == 1){
cout << "No" << endl;
return 0;
}
for(int i = 0; i <= x; i++){
for(int j = 0; j <= x; j++){
if(i + j > x) continue;
else if((i * 4) + (j * 2) == y ){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
