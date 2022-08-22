#include<iostream>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int n;
cin >> n;
n = n * 108 / 100;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
