#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
int main(void){
int n,y;
cin >> n >> y;
int m = 2*n;
int M = 4*n;
if(m<=y && y<=M && y%2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
