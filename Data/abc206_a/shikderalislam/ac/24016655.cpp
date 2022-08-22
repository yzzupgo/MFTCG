#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
float ans = floor(n * 1.08);
if(ans < 206) {
cout << "Yay!" << endl;
}
if(ans > 206) {
cout << ":(" << endl;
}
if(ans == 206) {
cout << "so-so" << endl;
}
}
