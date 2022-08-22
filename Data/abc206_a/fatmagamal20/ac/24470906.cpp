#include<iostream>
#include<cmath>
using namespace std;
int main() {
int N, X;
cin >> N;
X = floor((float)N * 1.08);
if(X < 206) {
cout << "Yay!\n";
} else if(X == 206) {
cout << "so-so\n";
} else {
cout << " :(\n";
}
return 0;
}
