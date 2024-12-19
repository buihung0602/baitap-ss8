#include <stdio.h>

int main() {
	int n,sum,x=0;
	printf("nhap canh hinh vuong: ");
	scanf("%d",&n);
	while (n<=2) {
		printf("canh phai >2, vui long nhap lai: ");
		scanf("%d",&n);
	}
	int matrix[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++) {
			printf("nhap gia tri cho mang matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
			} 
		}
	
	printf("ma tran la: \n");
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++) {
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
}
	return 0;
}
