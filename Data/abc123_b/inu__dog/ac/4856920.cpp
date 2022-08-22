#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int a[5],b[5],c[5];
	for(int i = 0; i < 5; i++)
	{
	    cin >> a[i];
	    b[i] = a[i] / 10;
	    c[i] = a[i] % 10;
    }
	int sum[5];
	for(int i = 0; i < 5; i++)
	{
	    sum[i] = 0;
	}
	for(int i = 0; i < 5; i++)
	{
	    for(int j = 0; j < 5; j++)
	    {
	        if(i == j)
	        {
	            sum[i] += a[j];
	        }
	        else
	        {
	            if(c[j] == 0)
	            {
	                sum[i] += a[j];
	            }
	            else
	            {
	                sum[i] = sum[i] + (b[j] + 1) * 10;
	            }
	        }
	    }
	}
	sort(sum,sum+5);
	cout << sum[0];
	return 0;
}