#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main(){
int X, Y;
cin >> X >> Y;
for(int i = 0; i < X; i++){
if(2*(X-i)+4*i == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
