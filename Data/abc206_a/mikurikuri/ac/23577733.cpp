#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int a = N * 1.08;
if(a == 206) {
cout << "so-so" << endl;
} else if(a < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
