#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ll n;
cin >> n;
double d = (1.08 * n);
if(d < 206) {
cout << "Yay!" << endl;
} else if(d == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
