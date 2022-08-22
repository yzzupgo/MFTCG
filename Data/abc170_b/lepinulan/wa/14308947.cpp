#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int X,Y;
cin >>X>>Y;
int Z;
Z=(Y-X*2)/2;
if(0<Z && Z<=X){
cout << "Yes" <<endl;
}
else{
cout << "No" <<endl;
}
}
