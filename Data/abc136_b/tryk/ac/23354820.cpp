#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
int ans = 0;
cin >> n;
if(n <= 9){
cout << n << endl;
}else if(n <= 99){
cout << 9 << endl;
}else if(n <= 999){
cout << 9 + n - 99 << endl;
}else if(n <= 9999){
cout << 909 << endl;
} else if(n <= 99999){
cout << 9 + 900 + n - 9999 << endl;
} else{
cout << 90909 << endl;
}
}
