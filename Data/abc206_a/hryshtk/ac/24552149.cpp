#include<iostream>
using namespace std;
int N;
int main() {
cin >> N;
N = N * 108 / 100;
if(N < 206) {
cout << "Yay!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
