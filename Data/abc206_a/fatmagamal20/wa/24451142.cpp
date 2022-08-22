#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
if((N * 1.08) < 206) {
cout << "Yay!\n";
} else if((N * 1.08) == 206) {
cout << "so-so\n";
} else if((N * 1.08) > 206) {
cout << " :(\n";
}
return 0;
}
