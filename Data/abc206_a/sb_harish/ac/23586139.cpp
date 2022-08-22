#include<bits/stdc++.h>
using namespace std;
int main() {
int ans;
double n, p;
cin >> n;
p = double(1.08) * n;
ans = float(p);
if(ans == 206) {
cout << "so-so";
} else if(ans > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}
