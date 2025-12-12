/*
Problem
จงเขียนโปรแกรมภาษา C เพื่อพื่ รับรั ข้อมูลแคมเปญโฆษณา N แคมเปญ และคำ นวณกำ ไร/ขาดทุนสุทธิของแต่ละแคมเปญ
การคำ นวณคอมมิชมิชันจะขึ้นอยู่กัยู่ กับ "จำ นวนยอดขาย" (salesCount) ตามกฎที่กำ หนด
1. ประกาศโครงสร้าง (struct) ชื่อ Campaign
- name (ชื่อแคมเปญ: char array ขนาด 50)
- productPrice (ราคาสินค้าต่อชิ้น: float)
- salesCount (จำ นวนยอดขาย: int)
- adSpend (ค่าใช้จ่ายโฆษณา: float)
2. ในฟังฟัก์ชัน main ให้รับรั ค่า N (จำ นวนแคมเปญ)
3. ใช้ for loop เพื่อพื่ วนรับข้อมูลมู N แคมเปญ (name, productPrice, salesCount, adSpend)
4. ภายในลูป:
- กำ หนดอัตราคอมมิชมิชัน (commissionRate) ตามเงื่อนไข:
- salesCount >= 20: Rate 20% (0.20)
- salesCount >= 10: Rate 15% (0.15)
- salesCount < 10: Rate 10% (0.10)
- คำ นวณ Total Revenue (รายได้รวมก่อนหักค่าใช้จ่าย) = salesCount * productPrice
- คำ นวณ Total Commission = Total Revenue * commissionRate
- คำ นวณ Net Profit/Loss = Total Commission - adSpend
5. แสดงผลลัพธ์ของแต่ละแคมเปญ โดยมีรายละเอียดการคำ นวณและข้อมูลจาก struct
Pre-code
Code
struct Campaign {
 char name[50];
 float productPrice;
 int salesCount;
 float adSpend;
};
int main() {
 int N, i;

 if (scanf("%d", &N) != 1) {
 return 1;
 }
 struct Campaign campaigns[N];


 for (i = 0; i < N; i++) {
 float commissionRate = 0.0;
 float totalRevenue;
 float totalCommission;
 float netProfitLoss;


 if (scanf("%s %f %d %f", campaigns[i].name, &campaigns[i].productPrice,
 &campaigns[i].salesCount, &campaigns[i].adSpend) != 4) {
 return 1;
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/12/25, 10:40 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/3/8 1/4
Code
 }

 totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice;

 if (campaigns[i].salesCount >= 20) {
 commissionRate = 0.20;
 } else if (campaigns[i].salesCount >= 10) {
 commissionRate = 0.15;
 } else {
 commissionRate = 0.10;
 }

 totalCommission = totalRevenue * commissionRate;

 netProfitLoss = totalCommission - campaigns[i].adSpend;


 printf("--- Campaign: %s ---\n", campaigns[i].name);
 printf("Sales: %d, Ad Spend: %.2f\n", campaigns[i].salesCount, campaigns[i].adSpend);
 printf("Rate Used: %.0f%%\n", commissionRate * 100);
 printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n",
 totalRevenue, commissionRate * 100, campaigns[i].adSpend, netProfitLoss);
 printf("Net Result: %.2f\n", netProfitLoss);
 }

 return 0;
}
Test Case 1
Input Output
2
SummerSale 100.00 25 300.00
WinterLaunch 500.00 12 800.00
--- Campaign: SummerSale ---
Sales: 25, Ad Spend: 300.00
Rate Used: 20%
Calculation: (2500.00 * 20%) - 300.00 = 200.00
Net Result: 200.00
--- Campaign: WinterLaunch ---
Sales: 12, Ad Spend: 800.00
Rate Used: 15%
Calculation: (6000.00 * 15%) - 800.00 = 100.00
Net Result: 100.00
Test Case 2
Input Output
2
LowVolume 50.00 5 30.00
HighRisk 2000.00 30 10000.00
--- Campaign: LowVolume ---
Sales: 5, Ad Spend: 30.00
Rate Used: 10%
Calculation: (250.00 * 10%) - 30.00 = -5.00
Net Result: -5.00
--- Campaign: HighRisk ---
Sales: 30, Ad Spend: 10000.00
Rate Used: 20%
Calculation: (60000.00 * 20%) - 10000.00 = 2000.00
Net Result: 2000.00
Test Case 3
12/12/25, 10:40 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/3/8 2/4
Input Output
3
Border10 100.00 10 150.00
Border20 100.00 19 250.00
ZeroSale 10.00 0 1.00
--- Campaign: Border10 ---
Sales: 10, Ad Spend: 150.00
Rate Used: 15%
Calculation: (1000.00 * 15%) - 150.00 = 0.00
Net Result: 0.00
--- Campaign: Border20 ---
Sales: 19, Ad Spend: 250.00
Rate Used: 15%
Calculation: (1900.00 * 15%) - 250.00 = 35.00
Net Result: 35.00
--- Campaign: ZeroSale ---
Sales: 0, Ad Spend: 1.00
Rate Used: 10%
Calculation: (0.00 * 10%) - 1.00 = -1.00
Net Result: -1.00
Test Case 4
Input Output
1
LargeProduct 5000.00 20 15000.00
--- Campaign: LargeProduct ---
Sales: 20, Ad Spend: 15000.00
Rate Used: 20%
Calculation: (100000.00 * 20%) - 15000.00 = 5000.00
Net Result: 5000.00
*/

#include <stdio.h>

struct Campaign {
    char name[50];
    float productPrice;
    int salesCount;
    float adSpend;
};

int main() {
    int N, i;

    if (scanf("%d", &N) != 1) {
        return 1;
    }
    struct Campaign campaigns[N];

    for (i = 0; i < N; i++) {
        float commissionRate = 0.0;
        float totalRevenue;
        float totalCommission;
        float netProfitLoss;

        if (scanf("%s %f %d %f", campaigns[i].name, &campaigns[i].productPrice, &campaigns[i].salesCount, &campaigns[i].adSpend) != 4) {
            return 1;
        }

        totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice;

        if (campaigns[i].salesCount >= 20) {
            commissionRate = 0.20;
        } else if (campaigns[i].salesCount >= 10) {
            commissionRate = 0.15;
        } else {
            commissionRate = 0.10;
        }

        totalCommission = totalRevenue * commissionRate;

        netProfitLoss = totalCommission - campaigns[i].adSpend;

        printf("--- Campaign: %s ---\n", campaigns[i].name);
        printf("Sales: %d, Ad Spend: %.2f\n", campaigns[i].salesCount, campaigns[i].adSpend);
        printf("Rate Used: %.0f%%\n", commissionRate * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n",
               totalRevenue, commissionRate * 100, campaigns[i].adSpend, netProfitLoss);
        printf("Net Result: %.2f\n", netProfitLoss);
    }

    return 0;
}