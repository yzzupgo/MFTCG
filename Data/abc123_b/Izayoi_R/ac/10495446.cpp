#include<iostream>
using namespace std ;

int main(){
	int c,mx ;
	mx = 0 ;
	int ans = 0 ;
	for(int i=0;i<5;i++){
		cin >> c ;
		ans += (c+9)/10 ;
		if(mx<10-c%10&&c%10!=0) mx = 10-c%10 ;
	}
	cout << ans*10-mx << endl ;
}