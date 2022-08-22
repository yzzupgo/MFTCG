#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i< (n); i++)
using namespace std;
using ll = long long;
int main() {
int x,y;
cin >> x >> y;
int kame = (y-(2*x))/2;
int turu = x - kame;
if(turu <0 || kame < 0){
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
}
