#include <bits/stdc++.h>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
bool can = false;
for(int i=0;i<=X;i++){
int turu = i;
int kame = X - turu;
int sum = turu*2 + kame*4;
if(sum == Y) can = true;
}
if(can) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
