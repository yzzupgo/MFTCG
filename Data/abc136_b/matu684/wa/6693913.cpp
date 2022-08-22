#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int N,total = 0;
cin>>N;
int keta=0;
int i = N;
while(i!=0){
i = i/10;
keta++;
}
if(keta==2) {
total = 9;
}
else if(keta==4){
total = 909;
}
else if(keta==6){
total = 90909;
}
else if(keta==1){
total = N;
}
else if(keta==3){
total = 9 + N-99;
}
else{
total = 909 + N-999;
}
cout << total << endl;
}
