#include <stdio.h>

int a[100][100];

void taomatran(int n) {
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            a[r][c] = 0;
        }
    }

	int i, j;
	
    for (int num = 1; num <= n * n; num++) {
    	if(num == 1){
    		i = n/2;
    		j = n - 1;
		}else{
			int i_cu = i;
			int j_cu = j;
			
			// Quy tac 1: Lên 1 hàng, Sang phai 1 cot
			i = i - 1 ; 
            j = j + 1;
            // Quy tac 2: vuot qua hang phai quay lai tu dau
            if(i == -1){
            	i =  n - 1;
			}
			if(j == n){
				j = 0;
			}
      //Quy tac 3: neu o da co chu thi cot sang trai
			if (a[i][j] != 0) {
                i = i_cu ;
                j = j_cu - 1;
                // xu li neu sang trai vuot bien
                if (j < 0) j = n - 1;
            }
	}
			a[i][j]= num;
}

    printf("Ma tran Magic Square (Bat dau tai hang %d, cot %d):\n", n/2, n-1);
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            printf("%3d ", a[r][c]);
        }
        printf("\n");
    }
}

int main(){
    int n;
	do{
		printf("Nhap n(so le): ");
		scanf("%d", &n);
		if(n % 2 == 0){
			printf("Loi: %d la so chan! Vui long nhap lai!", n);
			printf("\n");
		}
	}while(n % 2 == 0);
    
    taomatran(n);
    
    return 0;
}
