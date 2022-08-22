#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int p = 1.08 * n;
if(p < 206) {
cout << "Yay!";
} else if(p = 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
