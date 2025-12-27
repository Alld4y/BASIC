/*
Problem
จงเขียนโปรแกรมภาษา C ในการจัดการข้อมูลสินค้าคงคลัง โดยมีการคำ นวณหา "กำ ไรสุทธิ" (Profit) และ "เปอร์เซ็นต์กำ ไร" (Profit Percentage) ของ
สินค้าแต่ละรายการ ผ่าผ่ นการสร้าร้ง Function ที่รับผิดชอบในการคำ นวณแต่ละส่วส่ น
# ความรู้พื้รู้ พื้นพื้ ฐานที่ต้องใช้:
1. Struct: ใช้ในการรวมข้อมูลมู สินค้า (ราคาต้นทุน, ราคาขาย, จำ นวน) เข้าไว้ด้วยกัน
2. Multiple Functions: ใช้ Function เฉพาะทางในการคำ นวณเพื่อให้โค้ดเป็นระเบียบ:
* Function 1: คำ นวณกำ ไรสุทธิต่อรายการ
* Function 2: คำ นวณเปอร์เร์ซ็นต์กำ ไร
# สูตรการคำ นวณ:
* กำ ไรต่อชิ้น (Unit Profit) = ราคาขายต่อชิ้น (Sell Price) - ราคาต้นทุนต่อชิ้น (Cost Price)
* กำ ไรสุทธิ (Total Profit) = กำ ไรต่อชิ้น x จำ นวนสินค้าคงคลัง (Stock)
* เปอร์เร์ซ็นซ็ ต์กำ ไร (Profit Percentage) = (กำ ไรต่อชิ้น / ราคาต้นทุนต่อชิ้น) x 100
# เงื่อนไขโจทย์:ย์
1. การสร้าร้ง Struct:
* สร้าร้ง Struct ชื่อ Product ที่มีสมีมาชิกดังนี้:
* item_id (รหัสสินค้า, int)
* cost_price (ราคาต้นทุนต่อชิ้น, float)
* sell_price (ราคาขายต่อชิ้น, float)
* stock_quantity (จำ นวนสินค้าคงคลัง, int)
2. การสร้าร้ง Function 1 (คำ นวณกำ ไรสุทธิ):
* ชื่อ: calculate_total_profit
* รับรั ค่า: ราคาต้นทุน (cost, float), ราคาขาย (sell, float), จำ นวน (qty, int)
* ส่งส่ คืนค่า: กำ ไรสุทธิ (Total Profit) เป็น float
3. การสร้าร้ง Function 2 (คำ นวณเปอร์เร์ซ็นซ็ ต์กำ ไร):
* ชื่อ: calculate_profit_percentage
* รับรั ค่า: ราคาต้นทุน (cost, float), ราคาขาย (sell, float)
* ส่งส่ คืนค่า: เปอร์เซ็นซ็ ต์กำ ไร (Profit Percentage) เป็น float
4. การดำ เนินนิ การ (ใน main):
* รับรั ค่าข้อมูลมู สินค้า 1 รายการ
* เรียรีกใช้ Function 1 เพื่อพื่หา Total Profit
* เรียรีกใช้ Function 2 เพื่อพื่หา Profit Percentage
* ใช้ Conditional Statement เพื่อตรวจสอบว่ากำ ไร (Profit) เป็นบวก, ลบ (ขาดทุน), หรือเป็นศูนย์ (เท่าทุน)
5. การแสดงผลลัพธ์ (Report):
* แสดงผลเป็นรายงานที่สรุปข้อมูลสำ คัญและผลการคำ นวณ
* แสดงราคาต้นทุน, ราคาขาย, จำ นวนคงคลัง
* แสดง Total Profit และ Profit Percentage (ทศนิยม 2 ตำ แหน่งน่ )
* แสดงผลสรุปสถานะกำ ไร: "Profit!", "Loss!", หรือ "Break Even."
คำ ใบ้:บ้ต้องแน่ใน่ จว่าได้ใช้ตัวแปรประเภท float หรือรื double ในการคำ นวณที่เกี่ยวข้องกับราคาและเปอร์เซ็นต์เพื่อให้ได้ความแม่นม่ ยำ
Pre-code
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/27/25, 6:48 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/9 1/4
Code
struct Product {
 int item_id;
 float cost_price;
 float sell_price;
 int stock_quantity;
};
float calculate_total_profit(float cost, float sell, int qty);
float calculate_profit_percentage(float cost, float sell);
int main() {
 struct Product item;
 float total_profit;
 float profit_percent;

 printf("Enter Item ID: ");
 scanf("%d", &item.item_id);

 printf("Enter Cost Price per unit: ");
 scanf("%f", &item.cost_price);

 printf("Enter Sell Price per unit: ");
 scanf("%f", &item.sell_price);
 printf("Enter Stock Quantity: ");
 scanf("%d", &item.stock_quantity);





 printf("\n--- INVENTORY PROFIT REPORT ---\n");
 printf("Item ID: %d\n", item.item_id);
 printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", item.cost_price, item.sell_price, item.stock_quantity);
 printf("Total Profit: %.2f\n", total_profit);
 printf("Profit Percentage: %.2f%%\n", profit_percent);

 return 0;
}
Test Case 1
Input Output
P001
100.00
150.00
50
--- INVENTORY PROFIT REPORT ---
Item ID: 1
Cost Price: 100.00, Sell Price: 150.00, Stock: 50
Total Profit: 2500.00
Profit Percentage: 50.00%
Status: Profit!
12/27/25, 6:48 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/5/9 2/4
Test Case 2
Input Output
P002
200.00
180.00
10
--- INVENTORY PROFIT REPORT ---
Item ID: 2
Cost Price: 200.00, Sell Price: 180.00, Stock: 10
Total Profit: -200.00
Profit Percentage: -10.00%
Status: Loss!
Test Case 3
Input Output
P003
50.00
50.00
100
--- INVENTORY PROFIT REPORT ---
Item ID: 3
Cost Price: 50.00, Sell Price: 50.00, Stock: 100
Total Profit: 0.00
Profit Percentage: 0.00%
Status: Break Even.
Test Case 4
Input Output
P004
1000.00
1250.00
5
--- INVENTORY PROFIT REPORT ---
Item ID: 4
Cost Price: 1000.00, Sell Price: 1250.00, Stock: 5
Total Profit: 1250.00
Profit Percentage: 25.00%
Status: Profit
*/

// Input P001

#include <stdio.h>

struct Product {
    int item_id;
    float cost_price;
    float sell_price;
    int stock_quantity;
};

float calculate_total_profit(float cost, float sell, int qty);
float calculate_profit_percentage(float cost, float sell);
int string_id_to_int(char str[]);

int main() {
    struct Product item;
    float total_profit;
    float profit_percent;
    
    char string_item_id[10];

    printf("Enter Item ID: ");
    scanf("%s", string_item_id);

    item.item_id = string_id_to_int(string_item_id);

    printf("Enter Cost Price per unit: ");
    scanf("%f", &item.cost_price);

    printf("Enter Sell Price per unit: ");
    scanf("%f", &item.sell_price);
    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock_quantity);

    total_profit = calculate_total_profit(item.cost_price, item.sell_price, item.stock_quantity);
    profit_percent = calculate_profit_percentage(item.cost_price, item.sell_price);

    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Item ID: %d\n", item.item_id);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", item.cost_price, item.sell_price, item.stock_quantity);
    printf("Total Profit: %.2f\n", total_profit);
    printf("Profit Percentage: %.2f%%\n", profit_percent);

    if (total_profit > 0) {
        printf("Status: Profit!\n");
    } else if (total_profit < 0) {
        printf("Status: Loss!\n");
    } else {
        printf("Status: Break Even.\n");
    }

    return 0;
}

float calculate_total_profit(float cost, float sell, int qty) {
    float unit_profit = sell - cost;
    return unit_profit * qty;
}

float calculate_profit_percentage(float cost, float sell) {
    float unit_profit = sell - cost;
    return (unit_profit / cost) * 100;
}

int string_id_to_int(char str[]) {
    int result = 0;
    int length = 0;
    int final_result = 0;
    for(int count = 1 ; str[count] != '\0' ; count++)
        length = count;
    for (int i = 1 ; str[i] != '\0' ; i++) {
        result = 0;
        result += ((int)str[i] - 48);
        for(int pow = 0 ; pow < length - i ; pow++) {
            result *= 10;
        }
        final_result += result;
    }
    return final_result;
}