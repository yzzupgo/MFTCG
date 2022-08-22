#include <iostream>
using namespace std;
int main(void) {
int N;
cin >> N;
int ans = (int)(1.08 * N);
if(ans < 206) {
cout << "Yay!" << endl;
}
if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
