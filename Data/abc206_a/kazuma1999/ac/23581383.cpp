#include <bits/stdc++.h>
using namespace std;
int main() {
int N, kotae;
cin >> N;
kotae = N * 1.08;
if(kotae < 206) {
cout << "Yay!" << endl;
} else if(kotae == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
