#include <stdio.h>

void countCall() {
    int counter = 0; // ประกาศตัวแปร local ทั่วไป
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

//1.ค่า counter จะถูกเก็บไว้ระหว่างการเรียกฟังก์ชันแต่ละครั้ง เพราะ static variable มีอายุการทำงานตลอดทั้งโปรแกรม
//2.ค่า counter จะถูกสร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน เพราะ local variable มีอายุแค่ในช่วงการทำงานของฟังก์ชันนั้นๆ
//Static variable เหมาะสำหรับกรณีที่ต้องการรักษาค่าของตัวแปรระหว่างการเรียกฟังก์ชันหลายครั้ง
//Non-static variable เหมาะสำหรับกรณีที่ต้องการค่าเริ่มต้นใหม่ทุกครั้งที่ฟังก์ชันถูกเรียก
//สรุป ใช้ static variable เมื่อต้องการรักษาค่าของตัวแปรระหว่างการเรียกฟังก์ชันหลายครั้ง ใช้ non-static variable เมื่อต้องการค่าเริ่มต้นใหม่ทุกครั้งที่ฟังก์ชันถูกเรียก
