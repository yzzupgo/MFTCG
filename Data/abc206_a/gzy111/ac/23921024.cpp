#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n < 191) {
cout << "Yay!";
return 0;
}
if(n == 191) {
cout << "so-so";
return 0;
}
if(n > 191) {
cout << ":(";
return 0;
}
return 0;
}
