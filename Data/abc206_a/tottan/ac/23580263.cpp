#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
double n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!";
} else if(206 < n * 1.08 && n * 1.08 <= 207) {
cout << "so-so";
} else {
cout << ":(";
}
cout << endl;
}
