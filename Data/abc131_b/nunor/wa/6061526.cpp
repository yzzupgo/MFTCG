#include <iostream>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
if(l < 0 && l + n - 1 < 0){
cout << (l + (l+n-2)) * (n - 1) / 2 << endl;
}else if(l <= 0 && l + n - 1 >= 0){
cout << (l + (l+n-1)) * (n - 1) / 2 << endl;
}else if(l > 0 && l + n - 1 > 0){
cout << (l + 1 + (l+n-1)) * (n - 1) / 2 << endl;
}
return 0;
}
