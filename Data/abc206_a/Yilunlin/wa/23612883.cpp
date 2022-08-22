using namespace std;
#include<iostream>
int main() {
int n;
cin >> n;
if(n * 1.08 > 206) {
cout << ":(" << endl;
} else if(n == 191) {
cout << "so-so" << endl;
} else if(n * 1.08 < 206) {
cout << "Yay!" << endl;
}
return 0;
}
