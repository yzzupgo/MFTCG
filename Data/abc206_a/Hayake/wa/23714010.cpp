#include<bits/stdc++.h>
using namespace std;
const int m = 20600;
int n;
int main() {
cin >> n;
if(n * 108 / 100 == m) {
cout << "so-so" << endl;
} else if(n * 108 / 100 < m) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
