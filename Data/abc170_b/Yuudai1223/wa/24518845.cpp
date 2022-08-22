#include <bits/stdc++.h>
using namespace std;
int main(void){
int x,y;
cin >> x >> y;
int count1 = 0;
int count2 = 0;
int test = y;
while (true) {
if (y - 4 >= 0) {
y -= 4;
count1++;
}
else break;
}
while (true) {
if (y - 2 >= 0) {
y -= 2;
count1++;
}
else break;
}
y = test;
while (true) {
if (y - 2 >= 0) {
y -= 2;
count2++;
}
else break;
}
while (true) {
if (y - 4 >= 0) {
y -= 4;
count2++;
}
else break;
}
cout << (min(count1,count2) <= x ? "Yes" : "No") << endl;
}
