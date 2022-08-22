#include <bits/stdc++.h>
using namespace std;
int main(void){
int x,y;
cin >> x >> y;
int count1 = 0;
if (y % 2 != 0) {
cout << "No" << endl;
return 0;
}
while (true) {
if (y - 4 > 0) {
y -= 4;
count1++;
}
else break;
}
while (true) {
if (y - 2 > 0) {
y -= 2;
count1++;
}
else break;
}
cout << (count1 <= x ? "Yes" : "No") << endl;
}
