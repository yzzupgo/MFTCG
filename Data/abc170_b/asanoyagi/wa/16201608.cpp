#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout << setprecision(20) << fixed;
int X, Y;
cin >> X >> Y;
for(int i = 0; i < 100; i++){
if(i * 2 + (X - i) * 4 == Y){
cout << "Yes" <<endl;
return 0;
}
}
cout << "No" <<endl;
}
