#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int odd = 0;
if(n <= 9){
odd = n;
}else if(n < 99){
odd = 9;
}else if(n < 999){
odd = 9 + (n-99);
}else if(n < 9999){
odd = 909;
}else if(n < 99999){
odd = 909 + (n - 9999);
}
else if(n >= 99999){
odd = 90909;
}
cout << odd << endl;
return 0;
}
