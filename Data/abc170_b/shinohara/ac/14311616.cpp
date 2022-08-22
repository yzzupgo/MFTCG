#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main(){
int x, y;
cin >> x >> y;
for (int i=0; i<=x; i++){
int aleg = i*2;
int bleg = (x-i)*4;
if (aleg+bleg == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
