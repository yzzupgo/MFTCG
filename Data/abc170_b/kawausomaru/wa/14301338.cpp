#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int X,Y;
cin >> X >> Y;
if(Y-2*X>-0 && (Y-2*X%2==0)){
cout << "Yes" <<endl;
}
else{
cout << "No" <<endl;
}
}
