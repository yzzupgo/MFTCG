#include <iostream>
using namespace std;
int main(void) {
int n;
cin >> n;
int nn = 1.08 * n;
if(nn < 206) {
cout << "Yau!" << endl;
} else if(nn == 206) {
cout << "so-so" << endl;
} else if(nn > 206) {
cout << ":(" << endl;
}
}
