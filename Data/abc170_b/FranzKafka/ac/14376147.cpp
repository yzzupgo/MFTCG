#include <bits/stdc++.h>
using namespace std;
int main (){
int X;
cin >> X;
int Y;
cin >>Y;
int Z = (4*X-Y);
int z = (2*X-Y);
if (Y%2 ==0 && Z >= 0 && z<=0){cout <<"Yes" <<endl;}
else cout << "No" <<endl;
}
