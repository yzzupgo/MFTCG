#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); i++)
int main()
{
int x, y;
cin >> x >> y;
bool flag = false;
rep(i, 100){
rep(j, 100){
if (i + j == x && 2*i + 4*j == y){
flag = true;
break;
}
}
}
if(flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
