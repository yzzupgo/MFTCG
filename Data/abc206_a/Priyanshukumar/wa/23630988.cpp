#include<bits/stdc++.h>
using namespace std;
int main() {
int N, x;
cin >> N;
x = floor((float)1.08 * N);
if(x < 206) {
cout << "yay!";
}
if(x == 206) {
cout << "so-so";
}
if(x > 206) {
cout << ":(";
}
}
