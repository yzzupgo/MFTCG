#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
string ans;
cin >> X >> Y;
ans = "NO";
for(int i = 0; i < 101; i++){
for(int z = 0; z < 101; z++){
if(i * 2 + z * 4 == Y && i + z == X) {
ans = "YES";
}
}
}
cout << ans << endl;
return 0;
}
