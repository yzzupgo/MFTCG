#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
int x, y;
cin >> x >> y;
if(y/4 > x) {
cout << "No" << endl;
return 0;
}
if(y/4 == x){
cout << "Yes" << endl;
return 0;
}
for(int i=1; i<=y/2; i++){
if(y%4 == 0 || y%2 == 0){
cout << "Yes" << endl;
return 0;
}
y = y - i*2;
}
cout << "No" << endl;
return 0;
}
