#include<bits/stdc++.h>
using namespace std;
int main() {
double a;
cin >> a;
a = a * 1.08;
int ans = a;
if(a > 206) {
cout << "Yay!";
}
if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
