#include<bits/stdc++.h>
using namespace std;
#define rep(i,x,y) for(int i=(int)(x);i<(int)(y);i++)
#define print(A,x,n) rep(i,0,n){cout<<(i ? " ":"")<<A[i]x;}cout<<endl;
#define pprint(A,y,m,n) rep(j,0,m){print(A[j],y,n);}
const long mod = 1e9 + 7;
const int siz = 3e5;
const long inf = 1e18;
int main() {
int N;
cin >> N;
if(N * 108 / 100 < 206) {
cout << "Yay!" << endl;
} else if(N * 108 / 100 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
