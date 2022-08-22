#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll X, Y;
cin >> X >> Y;
bool check = false;
for (int i = 0; i <= X; i++) {
for (int j = 0; i + j <= X; j++){
if (i * 2 + j * 4 == Y && i+j==X) check = true;
}
}
if(check) cout <<"Yes" <<endl;
else cout <<"No" << endl;
return 0;
}
