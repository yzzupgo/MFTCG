#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
int N;
int ans;
cin >> N;
if(N/100000 == 1){
ans = 90909;
}else if(N/10000 > 0){
ans = 909 + (10000*((N/10000)-1))+ N%10000 + 1;
}else if(N/1000 > 0){
ans = 909;
}else if(N/100 > 0){
ans = 9 + (100*((N/100)-1))+N%100 + 1;
}else if(N/10 > 0){
ans = 9;
}else{
ans = N;
}
cout << ans << endl;
}
