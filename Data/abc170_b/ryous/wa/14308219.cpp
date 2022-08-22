#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int c = 0;
bool exist = false;
for(int i = 0; i < X; i++){
c = i * 2 + 4 * (X - i);
if(c == Y) exist = true;
}
if(exist) cout << "YES" << endl;
else cout << "NO" << endl;
}
