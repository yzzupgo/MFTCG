#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if(Y >= 2*X && Y<=4*X && Y%2 == 0){
cout << "Yes" <<endl;
}
else{
cout << "NO" <<endl;
}
}
