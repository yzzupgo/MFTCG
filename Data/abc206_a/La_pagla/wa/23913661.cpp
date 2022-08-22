#include<bits/stdc++.h>
using namespace std;
int main() {
double x;
cin >> x;
double c = x * 1.08;
if(c < 206.00) {
cout << "Yay!";
} else if(c == 206.00) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
