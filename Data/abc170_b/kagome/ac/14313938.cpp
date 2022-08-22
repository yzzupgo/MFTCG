#include <bits/stdc++.h>
#define rep(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
rep(i,X+1){
if(2*i+4*(X-i)==Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
