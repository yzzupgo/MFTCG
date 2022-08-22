# include <iostream>
using namespace std;
int main() {
int n, k;
cin >> n;
k = n * 1.08;
if(k < 206) {
cout << "Yay!" << endl;
} else if(k == 206) {
cout << "so-so" << endl;
} else if(k > 206) {
cout << ":(" << endl;
}
}
