#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int price = floor(N * 1.08);
if(price > 206) {
cout << ":(" << endl;
}
if(price == 206) {
cout << "so-so" << endl;
}
if(price < 206) {
cout << "Yay!" << endl;
}
return 0;
}
