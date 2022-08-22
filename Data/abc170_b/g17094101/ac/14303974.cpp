#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
int main(){
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++){
int j = x - i;
if(2*i+4*j == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
