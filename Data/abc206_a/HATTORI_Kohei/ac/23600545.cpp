#include <bits/stdc++.h>
using namespace std;
int main(void) {
int N, x;
float R, y;
R = 1.08;
cin >> N;
y = R * N;
x = floor(y);
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
