#include <bits/stdc++.h>
using namespace std;
int main(){
long long X, Y;
cin >> X >> Y;
if(X * 4 < Y || 2 * X > Y) {
cout << "No" << endl;
return 0;
}
if((4 * X - Y) % 2 == 0){
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
}
