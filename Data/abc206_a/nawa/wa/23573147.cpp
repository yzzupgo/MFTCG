#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int t = N * 108;
if(t < 20600) {
cout << "Yay!" << endl;
} else if(t == 20600) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
