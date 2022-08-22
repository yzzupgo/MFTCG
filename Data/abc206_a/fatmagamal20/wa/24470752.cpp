#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
if((N * 1.08) < 206) {
cout << "Yay!\n";
}
if((N * 1.08) > 206) {
cout << " :(\n";
} else {
cout << "so-so\n";
}
return 0;
}
