#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
if(1<=n && n<10){
cout << n << endl;
}
else if(10<=n && n<100){
cout << 9 << endl;
}
else if(100<=n && n<1000){
cout << n-99+9 << endl;
}
else if(1000<=n && n<10000){
cout << 909 << endl;
}
else if(10000<=n && n<100000){
cout << n-9999+909 << endl;
}
else if(n==100000){
cout << 90909 << endl;
}
return 0;
}
