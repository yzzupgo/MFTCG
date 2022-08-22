#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int x, y, A;
cin >> x >> y;
A = x*2 - y/2;
if(0 <= A and A <= x){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
