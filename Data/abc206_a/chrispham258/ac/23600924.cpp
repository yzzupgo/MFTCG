#include<bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
float a;
a = 1.08 * x;
if(round(a) < 206) {
cout << "Yay!";
} else if(round(a) > 206) {
cout << ":(";
} else if(round(a) == 206) {
cout << "so-so";
}
return 0;
}
