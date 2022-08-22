#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int pr = N * 1.08;
if(pr < 206) {
cout << "Yay!" << endl;
}
if(pr > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
