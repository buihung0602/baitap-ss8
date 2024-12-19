#include <stdio.h>

int main() {
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum;
	printf("ma tran la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++) {
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
	
	printf("duong bien la: \n");
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++) {
				if( i==0||i==2||j==0||j==2) {
					sum+=matrix[i][j];
					printf("%d ",matrix[i][j]);
				}else {
					printf("  ");
				}
				
		}
		printf("\n");
}
		printf("tong cac so tren duong bien la: %d",sum);
	return 0;
}
