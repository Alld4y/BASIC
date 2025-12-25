/*
Problem
จงเขียนโปรแกรมภาษา C ในการคำ นวณหาค่าเฉลี่ย (Average) ของชุดตัวเลขจำ นวนเต็ม 5 ตัว โดยการสร้างและเรียกใช้ Function เพื่อทำ หน้าที่
คำ นวณผลรวม
# ความรู้พื้รู้ พื้นพื้ ฐานเกี่ยวกับการส่งส่ Array เข้า Function:
เมื่อมื่ เราส่งส่ Array เข้าไปยังยั Function ในภาษา C ข้อมูลที่ส่งส่ ผ่าผ่ นไปจริงริ ๆ คือ ที่อยู่เยู่ ริ่มต้น (Base Address) ของ Array นั้น ซึ่งเรียกว่า Pointer ดังนั้น
Function จะไม่ไม่ ด้รับรั สำ เนาของ Array ทั้งหมด แต่จะทำ งานกับ Array ต้นฉบับโดยตรง
* Function Prototype: เมื่อมื่ Function รับรั Array จะต้องมีกมีารระบุขนาดของ Array ในวงเล็บเหลี่ยม (เช่นช่ int data[], หรือใช้ int *data)
* การคำ นวณค่าเฉลี่ย: ค่าเฉลี่ย = ผลรวมของข้อมูล / จำ นวนข้อมูลมู
# เงื่อนไขโจทย์:ย์
1. การสร้าร้ง Function: สร้าง Function ที่มีคุมี คุณสมบัติดังนี้:นี้
* ชื่อ: calculate_sum
* รับรั ค่า (Parameters): รับค่า Array ของจำ นวนเต็ม (int array[]) และ ขนาดของ Array (int size)
* ส่งส่ คืนค่า (Return Type): ส่งส่ คืนค่า ผลรวม (Total Sum) เป็นจำ นวนเต็ม
2. การรับรั ข้อมูล (ใน main):
* ประกาศ Array ขนาด 5 (เช่นช่ int numbers[5];)
* ในฟังฟัก์ชัน main() ให้ใช้ Loop เพื่อรับค่าตัวเลขจำ นวนเต็ม 5 ตัว จากผู้ใช้ และเก็บไว้ใน Array
3. การคำ นวณและเรียกใช้ Function:
* เรียรีกใช้ Function calculate_sum โดยส่งส่ Array numbers และขนาด 5 เข้าไป
* นำ ผลรวมที่ได้กลับมาคำ นวณหาค่าเฉลี่ย (Average) ในฟังก์ชัน main() (ควรใช้ตัวแปร float สำ หรับค่าเฉลี่ย)
4. การแสดงผลลัพธ์ (Report):
* แสดงผลเป็นรายงานที่สรุปข้อมูลที่ป้อนเข้ามาและผลการคำ นวณ
* แสดงตัวเลขทั้งหมดที่ป้อน
* แสดงผลรวม (Total Sum)
* แสดงค่าเฉลี่ย (Average) โดยแสดงผลเป็นทศนิยม 2 ตำ แหน่งน่
คำ ใบ้:บ้ภายใน Function calculate_sum คุณจะต้องใช้ Loop เพื่อวนอ่านค่าใน Array และทำ การสะสมผลรวม (Accumulation)
Pre-code
Code
include <stdio.h>
define SIZE 5
int calculate_sum(int array[], int size);
int main() {
 int numbers[SIZE];
 int total_sum;
 float average;
 int i;

 printf("Enter %d integer numbers:\n", SIZE);
 for (i = 0; i < SIZE; i++) {
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/25/25, 3:01 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/3 1/4
Code
 printf("Number %d: ", i + 1);
 scanf("%d", &numbers[i]);
 }





 average = (float)total_sum / SIZE;

 printf("\n--- ARRAY AVERAGE REPORT ---\n");
 printf("Recorded Numbers: ");
 for (i = 0; i < SIZE; i++) {
 printf("%d ", numbers[i]);
 }
 printf("\n");
 printf("Total Sum: %d\n", total_sum);
 printf("Average: %.2f\n", average);
 return 0;
}
Test Case 1
Input Output
10
20
30
40
50
--- ARRAY AVERAGE REPORT ---
Recorded Numbers: 10 20 30 40 50
Total Sum: 150
Average: 30.00
Test Case 2
Input Output
1
2
3
4
5
--- ARRAY AVERAGE REPORT ---
Recorded Numbers: 1 2 3 4 5
Total Sum: 15
Average: 3.00
Test Case 3
Input Output
1
1
1
1
6
--- ARRAY AVERAGE REPORT ---
Recorded Numbers: 1 1 1 1 6
Total Sum: 10
Average: 2.00
Test Case 4
Input Output
15
25
35
--- ARRAY AVERAGE REPORT ---
Recorded Numbers: 15 25 35 45 55
12/25/25, 3:01 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/3 2/4
Input Output
45
55
Total Sum: 175
Average: 35.00

*/

#include <stdio.h>

#define SIZE 5

int calculate_sum(int array[], int size);

int main() {
    int numbers[SIZE];
    int total_sum;
    float average;
    int i;

    printf("Enter %d integer numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    total_sum = calculate_sum(numbers, SIZE);
    average = (float)total_sum / SIZE;

    printf("\n--- ARRAY AVERAGE REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", average);
    return 0;
}

int calculate_sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}
