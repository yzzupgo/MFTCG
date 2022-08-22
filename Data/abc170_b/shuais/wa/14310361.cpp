#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
int X,Y;
cin >> X >> Y;
int temp;
for (int i=0; i<101; i++){
temp = 2 * i + 4 * (X-i);
if (temp == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
