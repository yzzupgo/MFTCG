#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i <= (n); i++)
using namespace std;
typedef long long ll;
int main(){
int x, y;
cin >> x >> y;
int k = 0, t = 0;
rep(i, x)rep(j, x){
if(y == i * 4 + j * 2){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
