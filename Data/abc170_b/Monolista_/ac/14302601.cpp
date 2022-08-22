#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for(int i = 1; i <= X; i++){
if(Y == 4 * i + 2 * (X - i) || Y == 2 * i + 4 * (X - i)){
cout << "Yes" << endl;
break;
}
else if(i == X){
cout << "No" << endl;
}
}
}
