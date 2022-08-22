#include <bits/stdc++.h>
using namespace std;
int main() {
string str = "Good";
int n, l, result;
cin >> n >> l;
if(l > 0){
result = n * (l + 1 + l + n - 1) / 2;
}else if(l < 0 && l + n - 1 > 0){
result = n * (l + l + n - 1) / 2;
}else{
result = n * (l + l + n - 2) / 2;
}
cout << result << endl;
}
