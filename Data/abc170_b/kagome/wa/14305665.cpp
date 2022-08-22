#include <bits/stdc++.h>
#define rep(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
int T = 2*X;
rep(i,X+1){
T+=2*i;
if(T==Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
