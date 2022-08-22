#include<iostream>
using namespace std;
int main(){
	int a[5],min=10,sum=0;
	for(int i=0;i<5;i++){
		cin >> a[i];
		int rem = a[i]%10;
		if(rem!=0 && min>rem)	min = rem;
		sum += (a[i]+9)/10;	
	}
	cout << (sum-1)*10+min << endl;
	return 0;
}