/*
Problem
จงเขียนโปรแกรมภาษา C ในการจัดเก็บข้อมูลนักเรียนจำ นวน 3 คน โดยใช้ Array ของ Structs จากนั้นใช้ Function เพื่อค้นหาว่านักเรียนคนใดมี
คะแนนสอบสูงสุด
# ความรู้พื้รู้ พื้นพื้ ฐานเกี่ยวกับ Array of Structs:
Array of Structs คือการประกาศ Array ที่สมาชิกแต่ละตำ แหน่งน่ เป็นตัวแปรประเภท Struct แทนที่จะเป็นตัวแปรพื้นฐาน (เช่นช่ int หรือ float) ทำ ให้
เราสามารถจัดเก็บชุดข้อมูลมู ที่ซับซ้อน (เช่นช่ ข้อมูลนักเรียน: รหัส, ชื่อ, คะแนน) หลายรายการได้อย่าย่ งเป็นระเบียบ
# เงื่อนไขโจทย์:ย์
1. การสร้าร้ง Struct:
* สร้าร้ง Struct ชื่อ Student ที่มีสมีมาชิกดังนี้:นี้
* id (เลขประจำ ตัว, int)
* score (คะแนนสอบ, int)
2. การสร้าร้ง Function:
* สร้าร้ง Function ที่มีคุณสมบัติบั ติดังนี้:นี้
* ชื่อ: find_max_score_id
* รับรั ค่า (Parameters): รับค่า Array ของ Struct Student (struct Student students[]) และ ขนาดของ Array (int size)
* ส่งส่ คืนค่า (Return Type): ส่งส่ คืนค่า รหัสประจำ ตัว (id) ของนักเรียนที่มีคมี ะแนนสูงสุด (int)
3. การรับรั ข้อมูล (ใน main):
* ในฟังฟัก์ชัน main() ให้ประกาศ Array ของ Struct Student ที่มีขนาด 3 (สำ หรับนักเรียน 3 คน)
* ใช้ Loop เพื่อพื่ รับรั ค่า id และ score ของนักเรียนทั้ง 3 คน และเก็บข้อมูลลงใน Array ของ Struct
4. การวิเคราะห์และการเรียรีกใช้ Function:
* เรียรีกใช้ Function find_max_score_id เพื่อหา ID ของนักเรียรีนที่มีคะแนนสูงสุด
5. การแสดงผลลัพธ์ (Report):
* แสดงผลเป็นรายงานที่สรุปข้อมูลที่ป้อนเข้ามาและผลการวิเคราะห์
* แสดงข้อมูลมู id และ score ของนักนั เรียนทั้ง 3 คน ในรูปแบบตาราง
* แสดงผลลัพธ์: รหัสประจำ ตัวของนักเรียรีนที่มีคะแนนสูงสุด
คำ ใบ้:บ้ภายใน Function find_max_score_id คุณจะต้องใช้ Loop และ Conditional Statement เพื่อเปรียบเทียบคะแนน (students[i].score) และเก็บ
ค่า ID ของนักนั เรียรีนที่มีคมี ะแนนสูงกว่าไว้
Pre-code
Code
include <stdio.h>
define NUM_STUDENTS 3
struct Student {
 int id;
 int score;
};
int find_max_score_id(struct Student students[], int size);
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/25/25, 3:04 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/4 1/4
Code
int main() {
 struct Student class_data[NUM_STUDENTS];
 int top_student_id;
 int i;

 printf("Enter data for %d students:\n", NUM_STUDENTS);
 for (i = 0; i < NUM_STUDENTS; i++) {
 printf("--- Student %d ---\n", i + 1);
 printf("Enter ID: ");
 scanf("%d", &class_data[i].id);
 printf("Enter Score: ");
 scanf("%d", &class_data[i].score);
 }




 printf("\n--- STUDENT SCORE REPORT ---\n");
 printf("ID | Score\n");
 printf("-------|-------\n");
 for (i = 0; i < NUM_STUDENTS; i++) {
 printf("%-6d | %d\n", class_data[i].id, class_data[i].score);
 }
 printf("\nTOP PERFORMER ID: %d\n", top_student_id);
 return 0;
}
Test Case 1
Input Output
101
95
102
80
103
90
--- STUDENT SCORE REPORT ---
ID | Score
-------|-------
101 | 95
102 | 80
103 | 90
TOP PERFORMER ID: 101
Test Case 2
Input Output
201
70
202
85
203
99
--- STUDENT SCORE REPORT ---
ID | Score
-------|-------
201 | 70
202 | 85
203 | 99
TOP PERFORMER ID: 203
Test Case 3
Input Output
301
90
--- STUDENT SCORE REPORT ---
ID | Score
12/25/25, 3:04 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/4 2/4
Input Output
302
90
303
85
-------|-------
301 | 90
302 | 90
303 | 85
TOP PERFORMER ID: 301
Test Case 4
Input Output
401
50
402
45
403
55
--- STUDENT SCORE REPORT ---
ID | Score
-------|-------
401 | 50
402 | 45
403 | 55
TOP PERFORMER ID: 403
*/

#include <stdio.h>

#define NUM_STUDENTS 3
struct Student {
    int id;
    int score;
};
int find_max_score_id(struct Student students[], int size);

int main() {
    struct Student class_data[NUM_STUDENTS];
    int top_student_id;
    int i;

    printf("Enter data for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("--- Student %d ---\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &class_data[i].id);
        printf("Enter Score: ");
        scanf("%d", &class_data[i].score);
    }

    top_student_id = find_max_score_id(class_data, NUM_STUDENTS);

    printf("\n--- STUDENT SCORE REPORT ---\n");
    printf("ID | Score\n");
    printf("-------|-------\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%-6d | %d\n", class_data[i].id, class_data[i].score);
    }
    printf("\nTOP PERFORMER ID: %d\n", top_student_id);
    return 0;
}

int find_max_score_id(struct Student students[], int size) {
    int max_score = students[0].score;
    int max_id = students[0].id;
    for (int i = 1; i < size; i++) {
        if (students[i].score > max_score) {
            max_score = students[i].score;
            max_id = students[i].id;
        }
    }
    return max_id;
}