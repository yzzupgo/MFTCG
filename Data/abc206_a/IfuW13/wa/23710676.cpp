#include <iostream>
using namespace std;
int main(void) {
float n;
cin >> n;
float ans = n * 1.08;
if(ans > 206) {
cout << ":(" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
