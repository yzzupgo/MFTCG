#include <iostream>
#include <algorithm>

int rndup(int n)
{
	if (n%10==0) return n;
	else n + 10 - (n%10);
}

int main()
{
	int A[5];
	std::cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];
	int min_r = 0;
	int min_r_index = 0;
	for (int i=0; i<5; i++) {
		if (A[i]%10==0) continue;
		else if (min_r == 0 || min_r > A[i]%10) {
			min_r = A[i]%10; 
			min_r_index = i;
		}
	}
	int ans = 0;
	for (int i=0; i<5; i++) {
		if (i == min_r_index) ans += A[i];
		else ans += rndup(A[i]);
	}
	return 0;
}
