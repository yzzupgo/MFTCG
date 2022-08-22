#include<iostream>
using namespace std;
int main() {
int N = 0;
cin >> N;
N *= 1.08;
if(N < 206) {
cout << "Yay!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
