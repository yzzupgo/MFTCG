#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cout.tie(NULL);
int n ;
cin >> n;
int tp = n * 1.08;
if(tp < 206) {
cout << "Yay!" << endl;
} else if(tp == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
