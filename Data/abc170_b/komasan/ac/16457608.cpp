#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); ++i)
#define REPS(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;
using ll = long long;
int main() {
int x,y;
cin >> x >> y;
int z = 2*x;
REP(i,x+1){
if(z == y){
cout << "Yes" << endl;
return 0;
}
z += 2;
}
cout << "No" << endl;
}
