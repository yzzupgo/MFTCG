#include<iostream>
using namespace std;
int main() {
int N, X = (N * 1.08);
cin >> N;
if(X < 206) {
cout << "Yay!\n";
} else if(X == 206) {
cout << "so-so\n";
} else {
cout << " :(\n";
}
return 0;
}
