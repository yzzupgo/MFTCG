#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
int s = N * 1.08;
if(s < 206.0) {
cout << "Yay!" << endl;
return 0;
}
if(s == 206) {
cout << "so-so" << endl;
return 0;
}
cout << ":(" << endl;
return 0;
}
