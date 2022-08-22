#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int s = 1.08 * N;
if(s < 206) {
cout << "Yay!" << endl;
} else if(s = 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
