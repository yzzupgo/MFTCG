#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y; cin >> x >> y;
int kame;
for (int turu = 1; turu <= x; turu++){
kame = x - turu;
if(turu * 2 + kame * 4 == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
