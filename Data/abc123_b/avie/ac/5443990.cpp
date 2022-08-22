#include<stdio.h>
int main(void)
{
	int D[5],E[5];
	for (int i = 0; i < 5; i++)
		scanf("%d", &D[i]);
	for (int i = 0; i < 5; i++) {
		E[i] = D[i] % 10;
		//printf("%d\n", E[i]);
	}
	int L[5];
	int min = E[0];
	

	for (int i = 0; i < 5; i++) {
		if (E[i] == 0)
			L[i] = 10;
		else
			L[i] = E[i];
	}

		for (int i = 0; i < 4; i++) {
			if (min > L[i + 1]) {
				min = L[i + 1];

			}
		}

		/*for (int i = 0; i < 5; i++) {
			L[i] = E[i];
	}*/
	
	//printf("%d\n", min);
	int F[5];

	for (int i = 0; i < 5; i++) {
		if (E[i] == 0) {
			F[i] = D[i];
		}
		else
			F[i] = D[i] - L[i] + 10;
	}

	if (E[0] == 0 && E[1] == 0 && E[2] == 0 && E[3] == 0 && E[4] == 0)
		printf("%d", D[0] + D[1] + D[2] + D[3] + D[4]);
	else
		printf("%d", F[0]+F[1]+F[2]+F[3]+F[4] - 10 + min);

	return 0;
	

}