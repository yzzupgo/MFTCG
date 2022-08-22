#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < n; i++)
using namespace std;
int main() {
int n;
cin >> n;
if(n < 10){
cout << n << endl;
return 0;
}else if(n < 100){
cout << 9 << endl;
return 0;
}else if(n < 1000){
cout << n - 90 << endl;
return 0;
}else if(n < 10000){
cout << 909 << endl;
return 0;
}else if(n < 100000){
cout << n - 9090 << endl;
return 0;
}else{
cout << 90909 << endl;
}
}
