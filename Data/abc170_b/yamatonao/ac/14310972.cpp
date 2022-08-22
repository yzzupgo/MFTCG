#include <iostream>
using namespace std;
int main(void){
long long int x;
long long int y;
cin >> x >>y;
for(long long int i=0; i<=x; i++){
long long int tartle = (x-i);
long long int tmpans = y;
if(y == 2*i && i==x){
cout << "Yes" << endl;
return 0;
}else{
if(y < 2*i){
cout << "No" << endl;
return 0;
}else{
tmpans -= 2*i;
if(tmpans == tartle*4){
cout << "Yes" << endl;
return 0;
}
}
}
}
cout << "No" << endl;
return 0;
}
