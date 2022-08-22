#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,n) for (int i = 1; i <= (int)(n); i++)
int main(){
int X, Y;
cin >> X >> Y;
int crane = 2;
int turtle = 4;
for (int i = 0; i <= X; i++){
if (i * crane + (X - i) * turtle == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
