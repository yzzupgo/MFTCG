#include <bits/stdc++.h>
using namespace std;
int main(void){
int X, Y;
cin >> X >> Y;
for(int i = 0; i <= X; ++i) {
for(int j = X; j <= 0 ; --j) {
if((i * 2) + (j * 4) == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
