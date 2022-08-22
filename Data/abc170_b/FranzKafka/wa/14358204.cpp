#include <bits/stdc++.h>
using namespace std;
int main (){
int X;
cin >> X;
int Y;
cin >>Y;
int Z = (4*X-Y);
if (Y%2 ==0 && Z >= 0 && Z !=1){cout <<"Yes" <<endl;}
else cout << "No" <<endl;
}
