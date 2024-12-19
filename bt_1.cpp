#include <stdio.h>
int i,j,array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int main() {
	printf("phan tu trong mang tu cuoi ve dau la: \n");
	for (i=2;i>=0;i--) {
		for (j=2;j>=0;j--) {
		 printf("%d ",array[i][j]);
		}
	}
	return 0;
}
