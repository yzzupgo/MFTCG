#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int Ans = (X * 4 - Y) / 2;
if(Y % 2 == 0 && 0 <= Ans && Ans <= X) {
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
