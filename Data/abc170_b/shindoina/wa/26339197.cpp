#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool whe;
whe = false;
for(int i = 0; i < X; i++){
if(2 * i + 2 * X == Y){
whe = true;
}
}
if(whe){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
