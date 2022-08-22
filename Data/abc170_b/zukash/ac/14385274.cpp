#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
int main() {
lint X, Y;
cin >> X >> Y;
for(lint a=0; a<=X; a++) {
lint b = X - a;
if(a*2 + b*4 == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
