#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int ans = n * 1.08;
if(206 > ans) {
cout << "Yay!" << endl;
} else if(206 == ans) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
