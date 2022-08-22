#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int a = n * 1.08;
if(206 > a) {
cout << "Yay!" << endl;
} else if(206 == a) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
