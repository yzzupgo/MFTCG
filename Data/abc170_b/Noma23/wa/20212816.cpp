#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for(int i = 1;i <= 100;i++) {
for(int j = 1;j <= 100;j++) {
if(2 * i + 4 * j == Y && i + j == X){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
