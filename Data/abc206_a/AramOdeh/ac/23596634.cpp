#include <bits/stdc++.h>
using namespace std;
int main() {
double n ;
cin >> n ;
int x = llround(n * 1.08) ;
if(x < 206) {
cout << "Yay!";
} else if(x > 206) {
cout << ":(";
} else if(x == 206) {
cout << "so-so";
}
return 0 ;
}
