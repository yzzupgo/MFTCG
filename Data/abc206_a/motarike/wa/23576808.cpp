#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N ;
if(206 > N * 1.08) {
cout << "Yay!" << endl;
} else if(206 < N * 1.08) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
