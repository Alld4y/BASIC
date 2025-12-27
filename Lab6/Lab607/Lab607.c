/*
Problem
จงเขียนโปรแกรมภาษา C ในการจำ ลองการคำ นวณ "โอกาสชนะ" (Win Odds) อย่าย่ งง่าย ในเกม Poker ชนิด Texas Hold'em โดยกำ หนดให้ผู้เล่นมีไพ่
ในมือมื 2 ใบ และไพ่กพ่ องกลาง (Flop) 3 ใบ และต้องการตรวจสอบว่า "โอกาสในการได้คู่ (Pair)" นั้นมีมากน้อยเพียงใด
# ความรู้พื้รู้ พื้นพื้ ฐานเกี่ยวกับ Poker (Texas Hold'em):
* เป้าหมายของเกม: ผู้เล่นแต่ละคนต้องรวมไพ่ใพ่ นมือ 2 ใบ (Hole Cards) กับไพ่กพ่ องกลาง (Community Cards) 5 ใบ ให้ได้ชุดไพ่ (Hand) ที่มีมูลค่า
สูงสุด
* ลำ ดับการเปิดไพ่:พ่
1. Pre-flop: แจกไพ่ใพ่ นมือ 2 ใบ
2. Flop: เปิดไพ่กพ่ องกลาง 3 ใบแรก (สถานการณ์ในโจทย์นี้คือช่วช่ งนี้)นี้
3. Turn: เปิดไพ่กพ่ องกลางใบที่ 4
4. River: เปิดไพ่กพ่ องกลางใบที่ 5 (ใบสุดท้าย)
* ไพ่ 1 สำ รับรั : มี 52 ใบ แบ่งบ่ เป็น 4 ชุด (ดอก) ชุดละ 13 ใบ
# การคำ นวณโอกาสในการได้ไพ่ที่พ่ ที่ต้องการ (Outs and Odds):
Outs คือจำ นวนไพ่ที่พ่ ที่เหลืออยู่ใยู่ นสำ รับ ซึ่งเมื่อเปิดออกมาแล้วจะทำ ให้ผู้เล่นได้ชุดไพ่ที่พ่ ที่ต้องการ (เช่นช่ ได้คู่, ได้ตอง, ได้ฟลัช)
* 1. การนับนั ไพ่ที่พ่ ที่เปิดเผยแล้ว: ไพ่ใพ่ นมือมื 2 ใบ + ไพ่ Flop 3 ใบ = 5 ใบ
* 2. จำ นวนไพ่ที่พ่ ที่ยังยัไม่เม่ ปิดเผย (Unknown Cards): 52 - 5 = 47 ใบ
* สถานการณ์ใณ์นโจทย์:ย์ เราจะกำ หนดค่า Outs คงที่เพื่อความง่าย โดยต้องการให้ได้ "คู่" (Pair) จากไพ่ใพ่ นมือ 1 ใบ
* สมมติว่าไพ่ใพ่ นมือของเราคือ 9 และ K และ Flop ไม่มีม่ มี9 หรือ K เลย
* ไพ่ 9 เหลือในสำ รับรั 3 ใบ (จากทั้งหมด 4 ใบ, 1 ใบอยู่ใยู่ นมือเราแล้ว)
* ไพ่ K เหลือในสำ รับรั 3 ใบ (จากทั้งหมด 4 ใบ, 1 ใบอยู่ใยู่ นมือเราแล้ว)
* จำ นวน Outs ที่ต้องการ (ได้คู่ 9 หรือ K) = 3 + 3 = 6 Outs
* กฎการคำ นวณโอกาส (Odds):
* โอกาสในการได้ไพ่ที่พ่ ที่ต้องการ (เป็นเปอร์เซ็นต์) จะคำ นวณจาก Outs และจำ นวนไพ่ที่พ่ ที่เหลือ
* สูตรแบบง่ายสำ หรับรั การเปิดไพ่ 2 ใบสุดท้าย (Turn และ River):
* โอกาสชนะ (%) = Outs x 4
# เงื่อนไขโจทย์ (กำ หนดค่า Outs คงที่):
1. การกำ หนดค่า:
* กำ หนดให้จำ นวน Outs สำ หรับรั การได้คู่ = 6 (Outs ถูกถู กำ หนดให้คงที่ใน main เพื่อความง่าย)
* กำ หนดให้ค่าคงที่สำ หรับรั สูตรโอกาส (Multiplier) = 4
2. การสร้าร้ง Function:
* สร้าร้ง Function ที่มีคุณสมบัติบั ติดังนี้:นี้
* ชื่อ: calculate_win_odds
* รับรั ค่า (Parameters): จำ นวน Outs (int outs)
* ส่งส่ คืนค่า (Return Type): โอกาสชนะเป็นเปอร์เซ็นต์ (float) โดยใช้สูตร Outs x 4
3. การดำ เนินนิ การ (ใน main):
* กำ หนดค่า Outs ใน main()
* เรียรีกใช้ Function calculate_win_odds
* ใช้ Conditional Statement ใน main() เพื่อประเมินโอกาส:
* ถ้าโอกาสชนะ >= 30%: แสดง "HIGH Win Probability"
* ถ้าโอกาสชนะ < 30%: แสดง "LOW Win Probability"
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/27/25, 8:30 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/6/7 1/4
4. การแสดงผลลัพธ์ (Report):
* แสดงจำ นวน Outs ที่ใช้ในการคำ นวณ
* แสดงโอกาสชนะเป็นเปอร์เร์ซ็นซ็ ต์ (ทศนิยม 2 ตำ แหน่งน่ )
* แสดงการประเมินมิ โอกาส
คำ ใบ้:บ้การคำ นวณ (Outs x 4) ต้องใช้ Type Casting เพื่อให้ได้ผลลัพธ์เป็นทศนิยม
Pre-code
Code
float calculate_win_odds(int outs);
int main() {
 int card_outs;
 float win_probability;


 card_outs = 6;




 printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
 printf("Calculated Outs: %d\n", card_outs);
 printf("Win Probability (Odds x 4): %.2f%%\n", win_probability);

 printf("Assessment: ");

 return 0;
}
Test Case 1
Input Output
6 --- POKER PROBABILITY REPORT (2 Cards Remaining) ---
Calculated Outs: 6
Win Probability (Odds x 4): 24.00%
Assessment: LOW Win Probability
Test Case 2
Input Output
9 --- POKER PROBABILITY REPORT (2 Cards Remaining) ---
Calculated Outs: 9
Win Probability (Odds x 4): 36.00%
Assessment: HIGH Win Probability
Test Case 3
Input Output
7 --- POKER PROBABILITY REPORT (2 Cards Remaining) ---
Calculated Outs: 7
Win Probability (Odds x 4): 28.00%
Assessment: LOW Win Probability
12/27/25, 8:30 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/6/7 2/4
Test Case 4
Input Output
10 --- POKER PROBABILITY REPORT (2 Cards Remaining) ---
Calculated Outs: 10
Win Probability (Odds x 4): 40.00%
Assessment: HIGH Win Probability

where is an input?
*/

#include <stdio.h>

float calculate_win_odds(int outs);

int main() {
    int card_outs;
    float win_probability;

    printf("Enter the number of outs: ");
    scanf("%d", &card_outs);
    win_probability = calculate_win_odds(card_outs);

    printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
    printf("Calculated Outs: %d\n", card_outs);
    printf("Win Probability (Odds x 4): %.2f%%\n", win_probability);

    printf("Assessment: ");
    if (win_probability >= 30.0) {
        printf("HIGH Win Probability\n");
    } else {
        printf("LOW Win Probability\n");
    }

    return 0;
}

float calculate_win_odds(int outs) {
    return (float)(outs * 4);
}