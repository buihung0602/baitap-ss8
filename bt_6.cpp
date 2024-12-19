#include <stdio.h>

int main() {
	int n,sum,x=0;
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	printf("ma tran la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++) {
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	
		printf("cac phan tu tren duong bien la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++) {
			if( i==0||i==n-1||j==0||j==n-1) {
					sum+=matrix[i][j];
					printf("%d ",matrix[i][j]);
				}else {
					printf("  ");
				}
				
				
			}
		
			printf("\n");
	}

	printf("tong cac so nam tren duong bien: %d",x);
	return 0;
}
