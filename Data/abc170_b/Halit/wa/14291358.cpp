#include <bits/stdc++.h>
using namespace std;
int main(){
long long a,b;
cin >> a >> b;
if(b & 1){
cout << "No";
return 0;
}
cout << (a * 4 >= b ? "Yes" : "No");
}
