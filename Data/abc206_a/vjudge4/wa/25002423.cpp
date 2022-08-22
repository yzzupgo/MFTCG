#include<iostream>
using namespace std;
int main() {
long long N, x;
cin >> N;
x = (1.08 * N);
if(N < 206) {
cout << "Yay!\n";
} else if(N > 206) {
cout << ":(";
} else {
cout << "so-so\n";
}
return 0;
}
