#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n < 191) {
cout << "Yay!" << endl;
} else if(n == 191) {
cout << "so_so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
