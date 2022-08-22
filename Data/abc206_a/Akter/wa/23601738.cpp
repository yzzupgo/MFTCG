#include<bits/stdc++.h>
using namespace std;
int main() {
int n, s = 0;
cin >> n;
s = n * 1.08;
if(s < 206) {
cout << "Yoy!" << endl;
} else if(s > 206) {
cout << ":(" << endl;
} else if(s == 206) {
cout << "so-so" << endl;
}
}
