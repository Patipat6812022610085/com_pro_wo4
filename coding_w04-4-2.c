#include <stdio.h>

int main() {
    float score = 90.5; // ประกาศตัวแปรชนิด float สำหรับค่าทศนิยม
    printf("กรณีที่ 2 (float): score = %.1f\n", score);
    return 0;
}

//float score = 90.5 มีทศมิยม
//ถ้าใช้ int ไม่มีทศนิยม แต่ float มีทศนิยม
//สรุป ถ้าต้องค่าที่เป็นจำนวนเต็มใช้ int ถ้าต้องค่าที่มีเลขทศนิยมใช้ float