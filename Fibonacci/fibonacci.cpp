#include <stdio.h>

void fibo(int n){
	long long f[n+1];
	f[0] = 0;
	//Nhap 0 là lấn chiếm lòng lề đường đấy
	if{n >= 1){
	f[1] = 1;
	}
	for(int i = 2; i <= n; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	
	printf("Day Fibonacci: ");
	for(int i = 0; i <= n; i++){
		printf("%lld ", f[i]);
	}
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	fibo(n);
	return 0;
}
