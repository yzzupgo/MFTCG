#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 6;
double n;
int main() {
cin >> n;
double num = n * 1.08;
if(num < 206) {
cout << "Yay!";
} else if(num == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
