#include<bits/stdc++.h>
using namespace std;
double a;
int main() {
cin >> a;
if(a * 1.08 < 206) {
cout << "Yay!";
} else if(a * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
