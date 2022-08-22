#include<bits/stdc++.h>
using namespace std;
int main() {
int N, x;
cin >> N;
x = (1.08 * N);
if(x < 206) {
cout << "Yay!";
}
if(x == 206) {
cout << "so-so";
}
if(x > 206) {
cout << ":(";
}
}
