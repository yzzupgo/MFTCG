#include<bits/stdc++.h>
using namespace std;
#define int long long
int x, y;
signed main(){
cin >> x >> y;
for(int i = 0; i <= 100; i++){
for(int j = 0; j <= 100; j++){
if(i + j == x && i * 2 + j * 4 == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
