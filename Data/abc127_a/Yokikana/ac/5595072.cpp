#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
int main() {
int a,b;
cin >> a>>b;
if (13 <= a) {
cout << b << endl;
}
else if (6 <= a&&a <= 12) {
cout << b/2 << endl;
}
else if(a<=5){
b = 0;
cout << b << endl;
}
}
