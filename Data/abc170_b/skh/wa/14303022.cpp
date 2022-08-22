#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define ll long long
int main() {
int X, Y, flg=0;
cin >> X >> Y;
for(int i=0; i<X; i++){
for(int j=i; j<X; j++){
if((i*2 + j*4) == Y){
cout << "YES" << endl;
flg = 1;
break;
}
}
if(flg==1) break;
}
if(flg == 0){
cout << "NO" << endl;
}
}
