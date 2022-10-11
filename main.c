#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination(int n, int r)
{
	int res;
	int n_fac, nr_fac, r_fac;
	
	n_fac = factorial(n);
	nr_fac = factorial(n-r);
	r_fac = factorial(r);
	
	res = n_fac / (nr_fac * r_fac);
	
	return res;
}

int factorial(int n)
{
	int res = 1;
	int i;
	
	for (i=1; i<=n; i++)
		res = res * i;
	
	return res;
}


int main(int argc, char *argv[]) {
	int x, y;
	int final_res;
	
	printf("n 값을 입력하시오 : ");
	scanf("%i", &x);
	printf("r 값을 입력하시오 : ");
	scanf("%i", &y);
	
	final_res = combination(x, y);
	printf("%i\n", final_res);
	
	return 0;
}
