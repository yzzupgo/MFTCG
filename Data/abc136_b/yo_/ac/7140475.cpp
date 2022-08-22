#include<iostream>
using namespace std;
bool checkOddOrEven(int num){
int counter = 0;
for(; num > 0; counter++){
num /= 10;
}
if(counter % 2 == 1){ return true; } else { return false; }
}
int getResult(int num){
int count = 0;
for(int i = 0; i <= num; i++){
if(checkOddOrEven(i)){
count++;
}
}
return count;
}
int main(){
int n;
int count = 0;
cin >> n;
int result = getResult(n);
cout << result;
}
