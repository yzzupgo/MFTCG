#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
long long int n;
cin >> n;
long long int x = floor(1.08 * n);
if(x < n) {
cout << "Yay!";
} else if(x == n) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
