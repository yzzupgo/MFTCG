#include <iostream>
using namespace std;
int main() {
int N, S;
cin >>S >> N;
if (S >= 13) {
cout << N << endl;
}
else if (S >= 6) {
cout << N / 2 << endl;
}
else {
cout << "0" << endl;
}
return 0;
}
