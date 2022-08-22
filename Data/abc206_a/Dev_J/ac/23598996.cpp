#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(floor(1.08 * n) == 206) {
cout << "so-so";
} else if(floor(1.08 * n) > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}
