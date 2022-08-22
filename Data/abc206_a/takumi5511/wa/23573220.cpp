#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double ans = 1.08 * n;
if(n > 206) {
cout << ":(";
} else if(n == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
