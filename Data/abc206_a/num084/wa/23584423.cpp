#include <bits/stdc++.h>
using namespace std;
int main() {
double a;
cin >> a;
int b = a * 1.08;
if(b < 206) {
cout << "Hey!";
} else if(b == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
