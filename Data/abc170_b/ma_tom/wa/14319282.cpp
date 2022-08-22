#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if (Y % 2 == 1){
cout << "No" << endl;
return 0;
}
for(int i=0; i<X; i++){
int A = i + 1;
int B = X - A;
if(A*4 + B*2 == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
