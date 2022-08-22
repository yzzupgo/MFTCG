#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int N_ = N * 1.08;
if(N_ < 206) {
cout << "Yay!" << endl;
} else if(N_ == 206) {
cout << "so-so" << endl;
} else if(N_ > 206) {
cout << ":(" << endl;
}
}
