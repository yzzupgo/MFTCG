#include<iostream>
using namespace std;
int N;
int main() {
cin >> N;
N = (int)(N * 1.08);
if(N < 206) {
cout << "Yay" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
