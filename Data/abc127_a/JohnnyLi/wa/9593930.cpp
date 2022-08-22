#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if(a <= 5){
b = 0;
}
if(a > 5 && a < 14){
b = b/2;
}
if(a >= 14){
b = b;
}
cout << b;
return 0;
}
