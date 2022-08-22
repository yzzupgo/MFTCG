#include <iostream>
using namespace std;
int main(){
int n, l;
int eat;
cin >> n >> l;
if (n+l >= 0) eat = max(l,0);
else eat = n+l-1;
cout << (l + (n+l-1)) * n / 2 - eat;
}
