/*
Problem
จงเขียนโปรแกรมภาษา C ในการคำ นวณเงินเดือนสุทธิ (Net Salary) ของพนักงาน โดยใช้ Struct ในการจัดเก็บข้อมูล และใช้ Function ในการคำ นวณ
# ความรู้พื้รู้ พื้นพื้ ฐานเกี่ยวกับ Struct:
Struct (โครงสร้าร้ง) คือประเภทข้อมูลมู ที่เราสร้างขึ้นเอง (User-Defined Data Type) ซึ่งสามารถจัดเก็บตัวแปรที่มีชนิดข้อมูลแตกต่างกันเข้าไว้ในกลุ่ม
เดียวกันภายใต้ชื่อเดียว Struct ถูกออกแบบมาเพื่อรวมข้อมูลที่เกี่ยวข้องกันเข้าด้วยกันให้เป็นระเบียบ เช่นช่ ข้อมูลพนักงาน (ชื่อ, เงินเดือน, โบนัส)
# เงื่อนไขโจทย์:ย์
1. การสร้าร้ง Struct:
* สร้าร้ง Struct ชื่อ Employee ที่มีสมาชิก (Members) ดังนี้:
* id (เลขประจำ ตัว, int)
* gross_salary (เงินเดือนรวม, int)
* bonus (โบนัส, int)
* total_income (รายได้รวม, int)
2. การสร้าร้ง Function:
* สร้าร้ง Function ที่มีคุณสมบัติบั ติดังนี้:นี้
* ชื่อ: calculate_net_salary
* รับรั ค่า (Parameters): รับค่า total_income เป็นจำ นวนเต็ม 1 ตัว
* ส่งส่ คืนค่า (Return Type): ส่งส่ คืนค่าเงินเดือนสุทธิ (net_salary) เป็นจำ นวนเต็ม (โดยมีการหักภาษี)
3. การรับรั ข้อมูลและการคำ นวณ (ใน main):
* ในฟังฟัก์ชัน main() ให้รับค่า id, gross_salary, และ bonus ของพนักงาน 1 คน และเก็บข้อมูลลงในตัวแปร Struct Employee
* คำ นวณ total_income = gross_salary + bonus
* เรียรีกใช้ Function calculate_net_salary โดยส่งส่ ค่า total_income เข้าไป
4. การคำ นวณภาษี (ภายใน Function):
* ภายใน Function calculate_net_salary ให้ใช้ Conditional Statement (if/else) เพื่อคำ นวณการหักภาษี (Tax) ดังนี้:
* ถ้ารายได้รวม (total_income) > 30,000 บาท: หักภาษี 10%
* ถ้ารายได้รวม (total_income) <= 30,000 บาท: หักภาษี 5%
* เงินเดือนสุทธิ (net_salary) = total_income - Tax Amount
5. การแสดงผลลัพธ์ (Report):
* แสดงผลเป็นรายงานที่สรุปข้อมูลสำ คัญและผลการคำ นวณ
* แสดง id, gross_salary, bonus, total_income และ net_salary ที่คำ นวณได้
คำ ใบ้:บ้การคำ นวณภาษี 10% หรือรื 5% อาจทำ ให้เกิดค่าทศนิยม ดังนั้นให้ใช้การแปลงประเภทข้อมูล (Type Casting) เพื่อให้ได้ผลลัพธ์เป็นจำ นวนเต็ม
ตามที่ Function กำ หนดให้ส่งส่ คืน
Pre-code
Code
include <stdio.h>
struct Employee {
 int id;
 int gross_salary;
 int bonus;
 int total_income;
};
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/25/25, 2:56 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/2 1/4
Code
int calculate_net_salary(int total_income);
int main() {
 struct Employee emp;
 int net_salary;

 printf("Enter Employee ID: ");
 scanf("%d", &emp.id);

 printf("Enter Gross Salary: ");
 scanf("%d", &emp.gross_salary);

 printf("Enter Bonus: ");
 scanf("%d", &emp.bonus);

 emp.total_income = emp.gross_salary + emp.bonus;




 printf("\n--- EMPLOYEE SALARY REPORT ---\n");
 printf("ID: %d\n", emp.id);
 printf("Gross Salary: %d\n", emp.gross_salary);
 printf("Bonus: %d\n", emp.bonus);
 printf("Total Income: %d\n", emp.total_income);
 printf("Net Salary: %d\n", net_salary);
 return 0;
}
Test Case 1
Input Output
1001
40000
5000
--- EMPLOYEE SALARY REPORT ---
ID: 1001
Gross Salary: 40000
Bonus: 5000
Total Income: 45000
Net Salary: 40500
Test Case 2
Input Output
1002
25000
1000
--- EMPLOYEE SALARY REPORT ---
ID: 1002
Gross Salary: 25000
Bonus: 1000
Total Income: 26000
Net Salary: 24700
Test Case 3
12/25/25, 2:56 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/2 2/4
Input Output
1003
28000
2000
--- EMPLOYEE SALARY REPORT ---
ID: 1003
Gross Salary: 28000
Bonus: 2000
Total Income: 30000
Net Salary: 28500
Test Case 4
Input Output
1004
30000
1
--- EMPLOYEE SALARY REPORT ---
ID: 1004
Gross Salary: 30000
Bonus: 1
Total Income: 30001
Net Salary: 27001

*/

#include <stdio.h>
struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};

int calculate_net_salary(int total_income);

int main() {
    struct Employee emp;
    int net_salary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Gross Salary: ");
    scanf("%d", &emp.gross_salary);

    printf("Enter Bonus: ");
    scanf("%d", &emp.bonus);

    emp.total_income = emp.gross_salary + emp.bonus;

    net_salary = calculate_net_salary(emp.total_income);

    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);
    return 0;
}

int calculate_net_salary(int total_income) {
    int tax;
    if (total_income > 30000) {
        tax = total_income * 10 / 100;
    } else {
        tax = total_income * 5 / 100;
    }
    return total_income - tax;
}