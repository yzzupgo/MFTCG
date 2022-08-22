#include <iostream>
using namespace std;

int main()
{
	int A[5][2],i,min=9,ans =0;
	for(i=0;i<5;i++){
		cin >>A[i][0];
		A[i][1]=A[i][0]%10;
		if((A[i][1]<min) && (A[i][1]>0)){
			min = A[i][1];
		}else if (A[i][1]==0){
			A[i][0]-=10;
		}
		ans+=A[i][0]-A[i][1]+10;
	}
	cout << ans-10+min;
	return 0;
}
