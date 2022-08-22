#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if((int)(n * 1.08) > 206) {
cout << ":(" << endl;
} else if((int)(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
