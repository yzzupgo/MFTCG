#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(N < 190) {
cout << "Yay!";
} else if(N == 191) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
