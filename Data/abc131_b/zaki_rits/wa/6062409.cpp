#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
vector<int> s;
for(int i = 1;i <= n;i++){
s.push_back(l+i-1);
}
bool flag = false;
bool flag_o = false;
for(int i = 0;i < n;i++){
if(s[i] < 0){
flag = true;
}
if(s[i] == 0){
flag_o = true;
}
}
for(int i = 0;i < n;i++){
cout << s[i] << endl;
}
int add = 0;
if(flag != true){
for(int i = 1;i < n;i++){
add += s[i];
}
}
else if(flag == true && flag_o == true){
for(int i = 0;i < n;i++){
if(s[i] != 0){
add += s[i];
}
}
}
else if(flag == true && flag_o != true){
for(int i = 0;i < n-1;i++){
add += s[i];
}
}
cout << add << endl;
}
