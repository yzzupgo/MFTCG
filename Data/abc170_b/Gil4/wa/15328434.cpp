#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
if(0 <= (Y/2-X) || Y%2 == 0)cout << "Yes";
else cout << "No";
}
