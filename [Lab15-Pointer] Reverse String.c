#include <stdio.h>

void swap(char *a, char *b);

int main() {
  char message[101];
  scanf("%s", message);

  char *begin_ptr = message;
  char *end_ptr = message;
  while(*end_ptr != '\0') {
  // ขยับตำแหน่ง Address 1 Byte จนกว่าจะเจอ \0
    end_ptr++;
  }
  end_ptr--; // ย้อนกลับ 1 Byte (ไม่สนใจ \0)

  // Pointer ของ begin_ptr จะชี้อยู่ที่หน้าสุดของ message
  // Pointer ของ end_ptr จะชี้อยู่ที่หลังสุดของ message (ไม่ใช่ \0)
  // จากนั้นสิ่งที่ต้องทำต่อคือ สลับค่าเพื่อให้ข้อความย้อนกลับ และปริ้นผลลัพธ์จากตัวแปร message
  int round = end_ptr - begin_ptr;
  for(int i=0; i<=round/2; ++i){
    swap(begin_ptr, end_ptr);
    ++begin_ptr;
    --end_ptr;
  }
  
  printf("%s", message);
  
  return 0;
}

void swap(char *a, char *b) {
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return;
}
