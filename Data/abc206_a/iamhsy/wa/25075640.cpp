#include<bits/stdc++.h>
using namespace std;
int main() {
float N;
cin >> N;
int price = (int)floor(1.08 * N);
cout << ((price > 206) ? "Yay!" :
(price == 206) ? "so-so" :
":(") << endl;
}
