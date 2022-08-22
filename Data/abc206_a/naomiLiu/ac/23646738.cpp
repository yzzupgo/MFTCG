#include<bits/stdc++.h>
using namespace std;
int main() {
int n, m;
cin >> n;
m = (n * 1.08) / 1;
if(m < 206) {
cout << "Yay!" << endl;
} else if(m == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
