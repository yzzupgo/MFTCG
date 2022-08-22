#include<bits/stdc++.h>
using namespace std;
inline int read() {
int x = 0, f = 1;
char c = getchar();
while(c < '0' || c > '9') {
if(c == '-') {
f *= -1;
}
c = getchar();
}
while(c >= '0' && c <= '9') {
x = x * 10 + c - '0';
c = getchar();
}
return x * f;
}
double n;
signed main() {
cin >> n;
int x = (int)n * 1.08;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else if(x > 206) {
cout << ":(" << endl;
}
return 0;
}
