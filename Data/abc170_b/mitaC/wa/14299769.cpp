#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define prtd(var,i) cout << fixed << setprecision(i) << var << endl;
#define ll long long
using namespace std;
int main(){
int x, y;
cin >> x >> y;
rep(i, x+1){
int numt = i;
int numk = x-i;
cout << numt << " " << numk << endl;
if(numt*2 + numk*4 == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
