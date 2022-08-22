#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
int n, t;
cin >> n;
t = n * 1.08;
if(t < 206) {
cout << "Yay";
} else if(t == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
