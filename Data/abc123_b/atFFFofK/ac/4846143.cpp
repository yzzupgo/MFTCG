#include<iostream>
#include<math.h>
using namespace std;

int main(){

int a[5];
int l=10;
int h=0;
for(int i=0;i<5;i++){
	cin>>a[i];
	l=min(l,(a[i]-1)%10+1);
	h+=(a[i]-1)/10+1;
}

cout<<h*10+l-10<<endl;
return 0;
}