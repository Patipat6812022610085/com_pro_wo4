#include <stdio.h>

int main() {
    char nameInitial = 'P';
    int age = 19;
    float weight = 69.8f;
    char gender [] = "Male";

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);
    return 0;
}

//1. เป็น in/output ใช้เมื่อมี printf
//2. คือ การประกาศฟังชันหลักของตัวแปร
//3. ชนิดข้อมูล char(อักขระเดียว)
//4. ชนิดข้อมูล int(เก็บจำนวนเต็ม)
//5. ชนิดข้อมูล float(เก็บจำนวนทศนิยม)
//6. ชนิดข้อมูล array of char (เก็บสตริงข้อความ)
//7. printf เพื่อแสดงผล %c สำหรับตัวอักษร
//8. printf เพื่อแสดงผล %d สำหรับจำนวนเต็ม
//9. printf เพื่อแสดงผล %.2 สำหรับทศนิยม2ตำแหน่ง
//10. printf เพื่อแสดงผล %s สำหรับสตริงข้อความ
//11. ทำงานสำเร็จแล้ว