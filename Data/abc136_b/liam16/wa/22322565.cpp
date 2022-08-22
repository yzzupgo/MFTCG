#include<iostream>
using namespace std;
int main(){
int n, count = 0;
cin >> n;
for (int i = 1; i <=n; i ++){
if (i > 9999){
count ++;
}else if(i <= 999 && i >= 100){
count ++;
}else if(i < 10){
count ++;
}
}
cout << count << endl;
return 0;
}
