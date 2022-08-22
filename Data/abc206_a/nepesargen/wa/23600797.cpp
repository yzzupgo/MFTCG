#include <iostream>
using namespace std;
int main() {
float n = 0;
cin >> n;
float res = n * 1.08;
if(res < 206) {
cout << "Yay!" << endl;
} else if(res == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
