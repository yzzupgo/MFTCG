#include <iostream>
using namespace std;
int main(void){
int n;
int ans;
cin >> n;
if(n == 100000){
ans = 90909;
}else if (n > 9999){
ans = 9 + 900 + (n - 10000 + 1);
}else if(n > 999){
ans = 9 + 900;
}else if(n > 99){
ans = 9 + (n-100 +1);
}else if(n > 9){
ans = 9;
}else{
ans = (n-0+1);
}
cout << ans ;
return 0;
}
