#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[10];
	int mi=9,s=0;
	for(int i=0;i<5;i++) {
		cin >> a[i] ;
		if(a[i]%10!=0&&a[i]%10<mi) mi=a[i]%10;
		if(a[i]%10>0) a[i]=(a[i]/10+1)*10;
		s+=a[i] ; 
	}
	cout <<(s-10+mi) ;
	return 0;
}