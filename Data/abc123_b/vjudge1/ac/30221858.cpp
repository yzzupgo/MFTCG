#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


const int N = 100010;
pair<int,int> a[N],b[N]; 

int main(){
	for(int i = 0 ; i < 5 ; i++ )cin>>a[i].second;
	for(int i = 0 ; i < 5 ; i++ ){
		a[i].first = ( (a[i].second + 9) / 10 * 10 ) - a[i].second ;
	}
	sort(a,a+5);
	int sum = 0;
	for(int i = 0 ; i < 4 ; i++ )sum+=(a[i].second + a[i].first);
	sum+=a[4].second;
	cout<<sum;
}