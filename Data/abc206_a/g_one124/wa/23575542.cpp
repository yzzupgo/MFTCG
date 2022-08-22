#include<bits/stdc++.h>
using namespace std;
typedef long long int in;
int main() {
float n;
cin >> n;
int x = 1.08 * n;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ": (";
}
}
