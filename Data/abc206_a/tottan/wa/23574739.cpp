#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
double n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!";
} else if(n * 1.08 > 205) {
cout << "so-so";
} else {
cout << ":(";
}
cout << endl;
}
