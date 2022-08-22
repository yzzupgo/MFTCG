#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N ;
if(206 * 100 > N * 1.08 * 100) {
cout << "Yay!" << endl;
} else if(N == 191) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
