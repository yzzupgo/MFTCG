#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
long long int n;
cin >> n;
long long int count = 0;
if(n < 10){
count = n;
}
else if(n >= 10 && n < 100){
count = 9;
}
else if(n >= 100 && n < 1000){
count = 9;
long long int a = n-99;
count += a;
}
else if(n >= 1000 && n < 10000){
count = 909;
}
else if(n >= 10000 && n < 100000){
count = 909;
long long int a = n-9999;
count += a;
}
else if(n == 100000){
count = 90909;
}
cout << count << endl;
}
