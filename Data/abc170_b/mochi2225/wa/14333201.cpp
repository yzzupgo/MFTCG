#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if(Y % 2 == 1){
cout << "No" << endl;
return 0;
}
if(X * 2 > Y){
cout << "No" << endl;
}else if(X * 4 < Y){
cout << "No" << endl;
}else{
for(int i = 0; i < Y / 4; i++){
if((Y - 4 * i) / 2 == X - i){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
}
