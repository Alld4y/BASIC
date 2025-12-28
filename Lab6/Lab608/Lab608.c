/*
Problem
จงเขียนโปรแกรมภาษา C ในการรับค่าตัวเลขจำ นวนเต็ม 5 ตัว เก็บไว้ใน Array จากนั้นใช้ Function เพื่อค้นหาตำ แหน่งน่ ของตัวเลขที่ต้องการ และ
ทำ การ "อัปเดต" ค่าของตัวเลขนั้นนั้ ให้เป็นค่าใหม่
# ความรู้พื้รู้ พื้นพื้ ฐานที่ต้องใช้:
1. Pointer Traversal: การใช้ Pointer Arithmetic เพื่อพื่ วนค้นหาค่าใน Array
2. Call by Reference: การส่งส่ Array ไปยัง Function (เป็น Address) ทำ ให้ Function สามารถแก้ไขค่าสมาชิกใน Array ต้นฉบับได้โดยตรง
3. Search and Update: ใช้ Loop และ Conditional Statement เพื่อเปรียบเทียบค่าที่ค้นหากับสมาชิกใน Array
# เงื่อนไขโจทย์:ย์
1. การสร้าร้ง Function:
* สร้าร้ง Function ที่มีคุณสมบัติบั ติดังนี้:นี้
* ชื่อ: find_and_update
* รับรั ค่า (Parameters):
* Pointer ชี้ไปยัง Array ของจำ นวนเต็ม (int *arr_ptr)
* ขนาดของ Array (int size)
* ค่าที่ต้องการค้นหา (int search_value)
* ค่าใหม่สำม่ สำหรับรั อัปเดต (int new_value)
* ส่งส่ คืนค่า (Return Type): ส่งส่ คืนค่าสถานะเป็นจำ นวนเต็ม (int)
* 1 ถ้าค้นพบและอัปเดตค่าสำ เร็จ
* 0 ถ้าไม่พม่ บค่าที่ต้องการค้นหา
2. การดำ เนินนิ การ (ใน main):
* ประกาศ Array ขนาด 5 และรับค่าเริ่มต้นจากผู้ใช้
* รับรั ค่า search_value และ new_value จากผู้ใช้
* แสดงผลลัพธ์ของ Array ก่อนเรียกใช้ Function
* เรียรีกใช้ Function find_and_update
* แสดงผลลัพธ์ของ Array อีกครั้งรั้ หลังเรียกใช้ Function
* แสดงสถานะการดำ เนินการ (Success/Failed)
3. การแสดงผลลัพธ์ (Report):
* แสดงค่า Array ก่อนและหลังการอัปเดต
* แสดงสถานะการค้นหาและอัปเดต
คำ ใบ้:บ้ภายใน Function เมื่อมื่พบค่าที่ต้องการ ให้ใช้ Dereference Operator (*) ร่วร่ มกับ Pointer Arithmetic (*(arr_ptr + i)) เพื่อกำ หนดค่าใหม่ ก่อนที่
จะ return 1 ทันที
Pre-code
Code
int find_and_update(int *arr_ptr, int size, int search_value, int new_value);
void print_array(int array[], int size);
int main() {
 int numbers[SIZE];
 int search_val;
 int new_val;
 int status;
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/28/25, 2:26 PM BASIC Computer Programming
https://www.thailandfxwarrior.com/coding/course/basic/lab/6/8 1/4
Code
 int i;

 printf("Enter %d integer elements for the array:\n", SIZE);
 for (i = 0; i < SIZE; i++) {
 printf("Element %d: ", i + 1);
 scanf("%d", &numbers[i]);
 }

 printf("\nEnter value to search (Search Value): ");
 scanf("%d", &search_val);
 printf("Enter new value to replace it with (New Value): ");
 scanf("%d", &new_val);

 printf("\n--- ARRAY UPDATE REPORT ---\n");
 printf("Array BEFORE Update: ");
 print_array(numbers, SIZE);




 printf("Array AFTER Update: ");
 print_array(numbers, SIZE);

 printf("Status: ");

 return 0;
}
void print_array(int array[], int size) {
 for (int i = 0; i < size; i++) {
 printf("%d ", array[i]);
 }
 printf("\n");
}
Test Case 1
Input Output
10
20
30
40
50
30
99
--- ARRAY UPDATE REPORT ---
Array BEFORE Update: 10 20 30 40 50
Array AFTER Update: 10 20 99 40 50
Status: Update SUCCESSFUL.
Test Case 2
Input Output
5
6
7
8
9
--- ARRAY UPDATE REPORT ---
Array BEFORE Update: 5 6 7 8 9
Array AFTER Update: 5 6 7 8 9
Status: Update FAILED (Value not found).
12/28/25, 2:26 PM BASIC Computer Programming
https://www.thailandfxwarrior.com/coding/course/basic/lab/6/8 2/4
Input Output
10
0
Test Case 3
Input Output
10
20
10
30
40
10
5
--- ARRAY UPDATE REPORT ---
Array BEFORE Update: 10 20 10 30 40
Array AFTER Update: 5 20 10 30 40
Status: Update SUCCESSFUL.
Test Case 4
Input Output
1
2
3
4
5
5
50
--- ARRAY UPDATE REPORT ---
Array BEFORE Update: 1 2 3 4 5
Array AFTER Update: 1 2 3 4 50
Status: Update SUCCESSFUL
*/

#include <stdio.h>

#define SIZE 5

int find_and_update(int *arr_ptr, int size, int search_value, int new_value);
void print_array(int array[], int size);

int main() {
    int numbers[SIZE];
    int search_val;
    int new_val;
    int status;
    int i;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEnter value to search (Search Value): ");
    scanf("%d", &search_val);
    printf("Enter new value to replace it with (New Value): ");
    scanf("%d", &new_val);

    printf("\n--- ARRAY UPDATE REPORT ---\n");
    printf("Array BEFORE Update: ");
    print_array(numbers, SIZE);

    status = find_and_update(numbers, SIZE, search_val, new_val);

    printf("Array AFTER Update: ");
    print_array(numbers, SIZE);

    printf("Status: ");
    if (status == 1) {
        printf("Update SUCCESSFUL.\n");
    } else {
        printf("Update FAILED (Value not found).\n");
    }

    return 0;
}

int find_and_update(int *arr_ptr, int size, int search_value, int new_value) {
    for (int i = 0; i < size; i++) {
        if (*(arr_ptr + i) == search_value) {
            *(arr_ptr + i) = new_value;
            return 1; // Found and updated
        }
    }
    return 0; // Not found
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

