#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int value = (N * 108) / 100;
if(value < 206) {
cout << "Yay!" << endl;
} else if(value == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
