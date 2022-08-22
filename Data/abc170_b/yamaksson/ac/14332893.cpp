#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int X, Y;
cin >> X >> Y;
if(Y % 2 == 0 && Y >= X*2 && Y <= X*4){
cout << "Yes";
}else{
cout << "No";
}
return 0;
}
