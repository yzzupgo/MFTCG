#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
n = int(1.08 * n);
if(n < 206) {
cout << "Yay";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
