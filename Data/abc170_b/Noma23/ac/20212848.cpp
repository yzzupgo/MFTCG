#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for(int i = 0;i <= 100;i++) {
for(int j = 0;j <= 100;j++) {
if(2 * i + 4 * j == Y && i + j == X){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
