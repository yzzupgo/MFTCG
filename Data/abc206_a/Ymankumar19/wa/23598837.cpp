#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n > 191) {
cout << "Yay!";
} else if(n < 191) {
cout << "so-so";
} else if(n == 191) {
cout << ":(";
}
return 0;
}
