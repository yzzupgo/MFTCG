#include <iostream>
#include <vector>
using namespace std;
int main(){
int N;
cin>>N;
int k = 0;
int j = 1;
int a = 0;
for(int n = 1;n <= N;n++){
if(n < 10){
k++;
continue;
}
a = n;
while (a != 0){
a /= 10;
j++;
}
if(j % 2 == 1){
k++;
}
}
cout<<k<<endl;
}
