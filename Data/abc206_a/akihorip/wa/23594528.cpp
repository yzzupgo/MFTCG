#include<bits/stdc++.h>
using namespace std;
int main() {
double N;
double A;
cin >> N;
A = N * 1.08;
if(A < 206) {
cout << "Yay!";
}
if(A == 206) {
cout << "so-so";
}
if(A > 206) {
cout << ":(";
}
}
