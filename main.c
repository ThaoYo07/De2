#include <stdio.h>

int luong(int a,int b ){
    return a * b;
}

int main() {
    int a, b;
    int (*luongThang13)();
    luongThang13 = luong;
    printf("So nam kinh nghiem cho cong ty la:");
    scanf("%d", &a);
    printf("So nam lam viec cho cong ty la:");
    scanf("%d", &b);
    if (a < 2 && b < 1){
        printf("Mức lương chính thức của nhân viên được trả la: 10 trieu.");
        printf("Luong thang thu 13 la: %d", luongThang13(10000000, 0,3));
    } else if (a < 2 && b >= 1 && b <= 2){
        printf("Mức lương chính thức của nhân viên được trả la: 20 trieu.");
        printf("Luong thang thu 13 la: %d", luongThang13(10000000, 0,5));
    } else if (2 <= a && a < 5 && b >2 && b <= 5){
        printf("Mức lương chính thức của nhân viên được trả la: 20 trieu.");
        printf("Luong thang thu 13 la: %d", luongThang13(20000000, 1));
    } else if (a > 5 && b > 5 ){
        printf("Mức lương chính thức của nhân viên được trả la: 50 trieu.");
        printf("Luong thang thu 13 la: %d", luongThang13(10000000, 2));
    }

    return 0;
}
//Viết chương trình cho phép tính mức lương thưởng tháng 13 của một nhân viên.
//- Yêu cầu người dùng nhập số năm kinh nghiệm và số năm làm việc cho công ty.
//Mức lương chính thức của nhân viên được trả dựa theo số năm kinh nghiệm, trung bình như sau
//- Dưới 2 năm: 10 triệu.
//- Từ 2 đến 5 năm: 20 triệu.
//- Trên 5 năm: 30 triệu.
//- Mức thưởng tháng thứ 13 phụ thuộc vào lương chính thức và số năm cống hiến cho công ty theo tỉ lệ.
//- Cống hiến dưới 1 năm: thưởng 30% lương chính thức.
//- Cống hiến từ 1 năm đến 2 năm: thưởng 50%.
//- Cống hiến từ 2 năm đến 5 năm: thưởng 100%.
//- Cống hiến từ 5 năm trở lên: thưởng 200%.
//- Hàm tính lương tháng 13 được viết với hai tham số đầu vào là số năm kinh nghiệm và số năm cống hiến.
//- Hỏi người dùng có muốn tiếp tục chương trình hay không, nếu người dùng chọn “n” hoặc “N” thì dừng chương trình.