#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int aji[n];
for(int i=0;i<n;i++){
aji[i] = l + i;
}
int min = 999999;
for(int i=0;i<n;i++){
if(min > abs(aji[i])){
min = abs(aji[i]);
}
}
int sum = 0;
for(int i=0;i<n;i++){
sum += aji[i];
}
if(sum > 0){
cout << sum - min << endl;
}else{
cout << sum + min << endl;
}
}
