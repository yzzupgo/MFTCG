#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if(b%2==1){
cout << "No" << endl;
return 0;
}
if(a*2<=b&&b<=a*4){
cout << "Yes" << endl;
}
else if(a*2>b||a*4<b){
cout << "No" << endl;
}
}
