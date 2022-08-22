#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
double c = n * 1.08;
if(c > 206) {
cout << ":(";
}
if(c < 206) {
cout << "Yay!";
}
if(c == 206) {
cout << "so-so";
}
}
