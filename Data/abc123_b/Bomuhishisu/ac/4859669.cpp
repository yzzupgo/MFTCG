#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,i,j,temp=0,count= 0,o=0;
	int amari[5];
	int sum = 0;
	cin >> a >> b >> c >> d >> e;
	amari[0] = a % 10;
	amari[1] = b % 10;
	amari[2] = c % 10;
	amari[3] = d % 10;
	amari[4] = e % 10;
	for( i = 0; i < 5; i++ ){
		if(amari[i] == 0){
			count++;
		}
	}

	for( j = 0; j < 4 ; j++){
		for( i = 0; i < 4; i++ ){
			if( amari[i] > amari[i+1] ){
				temp = amari[i];
				amari[i] = amari[i+1];
				amari[i+1] = temp;
			}
		}
	}

	for( i = 0; i < 5; i++ ){
		if( amari[i] != 0 ){
			o = amari[i];
			break;
		}
	}

	amari[0] = a % 10;
	amari[1] = b % 10;
	amari[2] = c % 10;
	amari[3] = d % 10;
	amari[4] = e % 10;
if( count != 5 ){
	sum = a - amari[0] + 10 + b - amari[1] + 10 + c - amari[2] + 10 + d - amari[3] + 10 + e - amari[4] + 10 - (count+1) * 10 + o;
}else{
	sum = a - amari[0] + 10 + b - amari[1] + 10 + c - amari[2] + 10 + d - amari[3] + 10 + e - amari[4] + 10 - count * 10 + o;
}
	cout << sum << endl;
	return 0;
}
