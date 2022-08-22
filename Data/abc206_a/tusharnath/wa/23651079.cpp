#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(N < 190) {
cout << "Yay!\n";
} else if(N == 191) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
