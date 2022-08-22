#include<bits/stdc++.h>
using namespace std;
double n;
int main() {
cin >> n;
n = n * 1.08;
cout << n << endl;
if(206 <= n && n < 207) {
printf("so-so");
} else {
if(n > 206) {
printf(":(");
} else {
printf("Yay!");
}
}
return 0;
}
