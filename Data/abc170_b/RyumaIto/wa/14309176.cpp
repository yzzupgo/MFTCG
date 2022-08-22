#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int kame = (4 * X - Y) / 2;
int tsuru = (Y - 2 * X) / 2;
if(kame + tsuru == X && (4 * X - Y) % 2 == 0 && (4 * X - Y) / 2 >= 1){
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
}
