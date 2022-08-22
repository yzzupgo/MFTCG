#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
if(1 <= n && n <= 9){
cout << n << endl;
}else if(10 <= n && n <= 99){
cout << 9 << endl;
}else if(100 <= n && n <= 999){
cout << 9 + n - 100 + 1 << endl;
}else if(1000 <= n && n <= 9999){
cout << 9 + 900 << endl;
}else if(10000 <= n && 99999){
cout << 909 + n - 10000 + 1 << endl;
}else if(n == 100000){
cout << 90909 << endl;
}
return 0;
}
