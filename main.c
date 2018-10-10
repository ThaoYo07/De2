#include <stdio.h>
#include <stdlib.h>

int luong(int a, int b) {
    return a * b;
}

int main() {
    int a, b, c;
    printf("So nam kinh nghiem cho cong ty la:");
    scanf("%d", &a);
    printf("So nam lam viec cho cong ty la:");
    scanf("%d", &b);
    if (a < 2) {
        printf("Mức lương chính thức của nhân viên được trả la: 10 trieu.\n");
        if (b < 1) {
            c = 10000000 * 30 / 100;
            printf("Luong thang thu 13 la: %d ", c);
        } else if (b >= 1 && b < 2) {
            c = 10000000 * 50 / 100;
            printf("Luong thang thu 13 la: %d ", c);
        } else if (b >= 2 && b < 5) {
            c = 10000000 * 100 / 100;
            printf("Luong thang thu 13 la: %d", c);
        } else {
            c = 10000000 * 200 / 100;
            printf("Luong thang thu 13 la: %d", c);
        }
    } else if (a >= 2 && a <= 5) {
        printf("Mức lương chính thức của nhân viên được trả la: 20 trieu.\n");
        if (b < 1) {
            c = 20000000 * 30 / 100;
            printf("Luong thang thu 13 la: %d ", c);
        } else if (b >= 1 && b < 2) {
            c = 20000000 * 50 / 100;
            printf("Luong thang thu 13 la: %d ", c);
        } else if (b >= 2 && b < 5) {
            c = 20000000 * 1;
            printf("Luong thang thu 13 la: %d", c);
        } else {
            c = 20000000 * 2;
            printf("Luong thang thu 13 la: %d", c);
        }
    } else {
        printf("Mức lương chính thức của nhân viên được trả la: 30 trieu.\n");
        if (b < 1) {
            c = 30000000 * 30 / 100;
            printf("Luong thang thu 13 la: %d ", c);
        } else if (b >= 1 && b < 2) {
            c = 30000000 * 50 / 100;
            printf("Luong thang thu 13 la: %d ", c);
        } else if (b >= 2 && b < 5) {
            c = 30000000 * 1;
            printf("Luong thang thu 13 la: %d", c);
        } else {
            c = 30000000 * 2;
            printf("Luong thang thu 13 la: %d", c);
        }
    }
    char luachon;
    if (luachon == 'n' || luachon == 'N') {
        exit(1);
    }
    return 0;
}
////- Hỏi người dùng có muốn tiếp tục chương trình hay không, nếu người dùng chọn “n” hoặc “N” thì dừng chương trình.