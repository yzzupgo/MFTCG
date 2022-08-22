#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int X,Y;
cin >> X >> Y;
if(Y%2==1){
cout << "No" <<endl;
}
else if(Y<2*X){
cout << "No" <<endl;
}
else if(Y>4*X){
cout << "No" <<endl;
}
else{
cout << "Yes" <<endl;
}
}
