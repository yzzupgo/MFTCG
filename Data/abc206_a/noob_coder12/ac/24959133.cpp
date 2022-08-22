#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
long double x;
cin >> x;
x = x * 1.08;
ll ans = x;
if(ans > 206) {
cout << ":(\n";
} else if(ans == 206) {
cout << "so-so\n";
} else {
cout << "Yay!\n";
}
return 0;
}
