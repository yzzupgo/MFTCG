#include<iostream>
using namespace std;
int main() {
long long N, c;
cin >> N;
c = 1.8 * N;
if(c < 206) {
cout << "Yay!" << endl;
} else if(c == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
