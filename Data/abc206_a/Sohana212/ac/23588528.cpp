#include<bits/stdc++.h>
using namespace std;
int main() {
int n, price;
cin >> n;
price = n * 1.08;
if(price < 206) {
cout << "Yay!" << endl;
} else if(price == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
