/*
Problem
จงเขียนโปรแกรมภาษา C เพื่อพื่จำ ลองการติดตามงบประมาณโฆษณารายวัน N วัน โดยมีกฎการใช้จ่ายตามปริมาณงบที่เหลือ
โปรแกรมจะรับรั ค่า 2 ค่า คือ:
1. จำ นวนเงินเริ่มริ่ ต้น (initialBudget: Float)
2. จำ นวนเต็ม N_DAYS (จำ นวนวันทำ แคมเปญ)
ให้โปรแกรมทำ การวนซ้ำ N_DAYS รอบ (1 วันต่อรอบ) และกำ หนดค่าใช้จ่ายรายวันตามตารางดังนี้:
เงื่อนไขการใช้จ่าย (อิงตามงบที่เหลืออยู่)ยู่ :
- งบประมาณเหลือ >= 500.00: ใช้จ่าย 100.00
- งบประมาณเหลือ 100.00 ถึง 499.99: ใช้จ่าย 50.00
- งบประมาณเหลือน้อน้ ยกว่า 100.00: ใช้จ่าย 20.00
กฎการหยุด: ถ้าค่าใช้จ่ายที่คำ นวณได้ "มากกว่า" งบประมาณที่เหลืออยู่ ให้ใช้จ่ายเท่ากับงบประมาณที่เหลืออยู่ทั้ยู่ ทั้งหมด
ผลลัพธ์ที่แสดงต้องมี 2 ส่วส่ น:
1. รายงานรายวัน: แสดงวัน, เงินที่ใช้จ่าย, และเงินที่เหลืออยู่
2. รายงานสรุป: แสดงงบประมาณที่เหลืออยู่สุยู่ สุดท้าย (Final Budget)
Pre-code
Code
int main() {
 int N_DAYS, day;
 float initialBudget;
 float remainingBudget;
 float dailySpend;


 if (scanf("%f %d", &initialBudget, &N_DAYS) != 2) {
 return 1;
 }
 remainingBudget = initialBudget;

 printf("Day | Spend | Remaining\n");
 printf("---------------------------\n");


 for (day = 1; day <= N_DAYS; day++) {
 dailySpend = 0.0;

 if (remainingBudget >= 500.00) {
 dailySpend = 100.00;
 } else if (remainingBudget >= 100.00) {
 dailySpend = 50.00;
 } else if (remainingBudget > 0.0) {
 dailySpend = 20.00;
 } else {

 dailySpend = 0.0;
 }
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/12/25, 10:45 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/3/9 1/4
Code

 if (dailySpend > remainingBudget) {
 dailySpend = remainingBudget;
 }


 remainingBudget -= dailySpend;
 printf("%d | %.2f | %.2f\n", day, dailySpend, remainingBudget);
 }

 printf("---------------------------\n");
 printf("Final Budget: %.2f\n", remainingBudget);
 return 0;
}
Test Case 1
Input Output
700.00
3
Day | Spend | Remaining
---------------------------
1 | 100.00 | 600.00
2 | 100.00 | 500.00
3 | 100.00 | 400.00
---------------------------
Final Budget: 400.00
Test Case 2
Input Output
180.00
4
Day | Spend | Remaining
---------------------------
1 | 50.00 | 130.00
2 | 50.00 | 80.00
3 | 20.00 | 60.00
4 | 20.00 | 40.00
---------------------------
Final Budget: 40.00
Test Case 3
Input Output
90.00
5
// Test Case 3: Output
Day | Spend | Remaining
---------------------------
1 | 20.00 | 70.00
2 | 20.00 | 50.00
3 | 20.00 | 30.00
4 | 20.00 | 10.00
5 | 10.00 | 0.00
---------------------------
Final Budget: 0.00
Test Case 4
12/12/25, 10:45 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/3/9 2/4
Input Output
100.00
2
Day | Spend | Remaining
---------------------------
1 | 50.00 | 50.00
2 | 20.00 | 30.00
---------------------------
Final Budget: 30.00
*/


#include <stdio.h>

int main() {
    int N_DAYS, day;
    float initialBudget;
    float remainingBudget;
    float dailySpend;

    if (scanf("%f %d", &initialBudget, &N_DAYS) != 2) {
        return 1;
    }
    remainingBudget = initialBudget;

    printf("Day | Spend | Remaining\n");
    printf("---------------------------\n");

    for (day = 1; day <= N_DAYS; day++) {
        dailySpend = 0.0;

        if (remainingBudget >= 500.00) {
            dailySpend = 100.00;
        } else if (remainingBudget >= 100.00) {
            dailySpend = 50.00;
        } else if (remainingBudget > 0.0) {
            dailySpend = 20.00;
        } else {
            dailySpend = 0.0;
        }

        if (dailySpend > remainingBudget) {
            dailySpend = remainingBudget;
        }

        remainingBudget -= dailySpend;
        printf("%d | %.2f | %.2f\n", day, dailySpend, remainingBudget);
    }

    printf("---------------------------\n");
    printf("Final Budget: %.2f\n", remainingBudget);
    return 0;
}