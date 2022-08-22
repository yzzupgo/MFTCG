#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 1.08 > 266) {
cout << ":(" << endl;
} else if(n * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
