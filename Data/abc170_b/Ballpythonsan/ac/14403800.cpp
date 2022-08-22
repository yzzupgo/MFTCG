#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < (N); i++)
int main(){
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++){
if (i*2 + (X-i)*4 == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
