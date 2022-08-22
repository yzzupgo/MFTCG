#include<iostream>
using namespace std;
bool checkOddOrEven(int num){
int counter = 0;
for(; num > 0; counter++){
num /= 10;
}
if(counter % 2 == 1){ return true; } else { return false; }
}
int main(){
int n;
int count = 0;
cin >> n;
for(int i = 0; i <= n; i++){
if(checkOddOrEven(i)){
count++;
}
}
cout << count;
}
