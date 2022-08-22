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
aji[i] = l + i + 1 - 1;
}
int min = 999999;
for(int i=0;i<n;i++){
if(min > aji[i]){
min = aji[i];
}
}
int sum = 0;
for(int i=0;i<n;i++){
sum += aji[i];
}
cout << sum - min << endl;
}
