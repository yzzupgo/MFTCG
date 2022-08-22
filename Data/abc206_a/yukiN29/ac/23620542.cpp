#include <bits/stdc++.h>
using namespace std;
int main() {
int A, aft;
cin >> A ;
aft = A * 1.08 ;
if(aft < 206) {
cout << "Yay!" << endl;
} else if(aft == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
