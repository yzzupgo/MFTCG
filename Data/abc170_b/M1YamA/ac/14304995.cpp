#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if ((4*a-b)%2==0 && (b-2*a)%2==0 && (4*a-b)>=0 && (b-2*a)>=0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
