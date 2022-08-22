#include <bits/stdc++.h>
using namespace std;
int main(void){
int x,y;
cin >> x >> y;
int count = 0;
while (true) {
if (y - 4 >= 0) {
y -= 4;
count++;
}
else break;
}
while (true) {
if (y - 2 >= 0) {
y -= 2;
count++;
}
else break;
}
cout << (count <= x ? "Yes" : "No") << endl;
}
