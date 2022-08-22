#include<iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
int k = n * 1.08;
if(k == n) {
cout << "so-so" << '\n';
} else if(k < 206) {
cout << "Yay!" << '\n';
} else {
cout << ":(" << '\n';
}
}
