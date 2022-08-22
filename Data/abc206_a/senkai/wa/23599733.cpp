#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int Ans;
Ans = N * 1.08;
if(Ans < 206) {
cout << "Yey!" << endl;
} else if(Ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
