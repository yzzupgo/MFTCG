#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;
const int INF = 1001001001;
int main() {
int x, y;
for(int i = 0; i <= x; i++){
int a = i, b = x - i;
if(2*a+4*b == y && a+b==x){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
