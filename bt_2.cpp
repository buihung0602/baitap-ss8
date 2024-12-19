#include <stdio.h>
int n, array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int main() {
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &n);
    int check = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (n == array[i][j]) {
                printf("Vi tri phan tu do trong mang la: array[%d][%d]", i, j);
                check = 1;
                break;
            }
        }
       
    }
    if (!check) {
        printf("phan tu khong ton tai trong mang");
    }
    return 0;
}

