#include<iostream>
using namespace std;
int main(){
int N;
cin >>N;
int count=0;
for(int i=0;i<N;i++){
if(to_string(i).size()%2==1)count++;
}
cout << count;
return 0;
}
