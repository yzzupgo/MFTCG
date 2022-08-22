#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N = floor(N * 1.08);
if(N == 206) {
cout << "so-so" << endl;
} else if(N > 206) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
