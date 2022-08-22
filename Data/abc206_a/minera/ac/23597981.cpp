#include<iostream>
#include<cmath>
#include<cfenv>
using namespace std;
int main() {
int n;
cin >> n;
double t = n * 1.08;
t = floor(t);
if(t < 206) {
cout << "Yay!";
} else if(t == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
