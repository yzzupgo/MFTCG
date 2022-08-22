#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
if((n * 1.08) < 206) {
cout << "Yay!" << endl;
}
if((n * 1.08) == 206) {
cout << "so-so" << endl;
}
if((n * 1.08) > 206) {
cout << ":(" << endl;
}
return 0;
}
