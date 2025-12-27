/*
Problem
จงเขียนโปรแกรมภาษา C เพื่อพื่ รับรั ข้อความ (String) จากผู้ใช้ จากนั้นให้ใช้ตัวแปร Pointer ในการวนลูปเพื่อตรวจสอบอักขระแต่ละตัวในข้อความ และ
นับนั จำ นวน "สระ" (Vowels: a, e, i, o, u ทั้งตัวพิมพ์เล็กและตัวพิมพ์ใหญ่)ญ่ ที่ปรากฏอยู่ใยู่ นข้อความนั้น
# ความรู้พื้รู้ พื้นพื้ ฐานที่ต้องใช้:
1. String as char Array: ข้อความ (String) ในภาษา C คือ Array ของอักขระ (char)
2. Null Terminator: ทุก String จะต้องลงท้ายด้วยอักขระ Null (`\0`) ซึ่งซึ่ใช้เป็นเงื่อนไขในการหยุดการวนลูปเมื่อใช้ Pointer
3. Pointer Traversal: เราสามารถวนลูปตรวจสอบอักขระใน String ได้โดยการเพิ่มค่า Address ของ Pointer ทีละ 1 (e.g., ptr++)
# เงื่อนไขโจทย์:ย์
1. การประกาศตัวแปร:
* ประกาศ Array อักขระชื่อ sentence ที่มีขมีนาดพอเหมาะ (เช่นช่ 100)
* ประกาศตัวแปร Pointer ชนิดนิ char ชื่อ char_ptr
* ประกาศตัวแปรจำ นวนเต็มชื่อ vowel_count เพื่อเก็บผลการนับนั
2. การรับรั ข้อมูล:
* รับรั ข้อความ (String) จากผู้ใช้
3. การกำ หนดค่า Pointer และการวนซ้ำ :
* กำ หนดให้ char_ptr ชี้ไปยังยัอักขระตัวแรกของ sentence
* ใช้วงวน `while` ที่มีเงื่อนไขการหยุดเมื่อมื่ Pointer ชี้ไปที่ Null Terminator (`*char_ptr != '\0'`)
* ภายในลูป ให้ตรวจสอบว่าอักขระปัจจุบันเป็นสระหรือไม่ (a, e, i, o, u, A, E, I, O, U)
* หากเป็นสระ ให้นับเพิ่มพิ่ ใน `vowel_count`
* อย่าย่ ลืมเลื่อน Pointer ไปยังยัอักขระตัวถัดไป (char_ptr++)
4. การแสดงผลลัพธ์ (Report):
* แสดงข้อความที่ป้อนเข้ามา
* แสดงผลรวมจำ นวนสระที่นับนั ได้
คำ ใบ้:บ้การเปรียรีบเทียบสระสามารถใช้ `switch` statement หรือชุดของ `if/else if` ก็ได้
Pre-code
Code
int count_vowels_with_pointer(char *str);
int main() {
 char sentence[MAX_SIZE];
 int vowel_count;

 printf("Enter a sentence: ");

 if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
 return 1;
 }


ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/27/25, 8:23 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/6/5 1/3
Code
 sentence[strcspn(sentence, "\n")] = '\0';

 vowel_count = 0;
 char *char_ptr = sentence;



 printf("\n--- STRING ANALYSIS REPORT ---\n");
 printf("Input String: \"%s\"\n", sentence);
 printf("Total Vowel Count: %d\n", vowel_count);
 return 0;
}
Test Case 1
Input Output
programming is fun --- STRING ANALYSIS REPORT ---
Input String: "programming is fun"
Total Vowel Count: 5
Test Case 2
Input Output
Hello World! --- STRING ANALYSIS REPORT ---
Input String: "Hello World!"
Total Vowel Count: 3
Test Case 3
Input Output
rhythm --- STRING ANALYSIS REPORT ---
Input String: "rhythm"
Total Vowel Count: 0
Test Case 4
Input Output
AEIOUaeiou --- STRING ANALYSIS REPORT ---
Input String: "AEIOUaeiou"
Total Vowel Count: 10
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int count_vowels_with_pointer(char *str);

int main() {
    char sentence[MAX_SIZE];
    int vowel_count;

    printf("Enter a sentence: ");

    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    vowel_count = count_vowels_with_pointer(sentence);

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);
    return 0;
}

int count_vowels_with_pointer(char *str) {
    int count = 0;
    char *char_ptr = str;

    while (*char_ptr != '\0') {
        switch (*char_ptr) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
            default:
                break;
        }
        char_ptr++;
    }

    return count;
}