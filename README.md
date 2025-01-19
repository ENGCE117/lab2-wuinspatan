## ข้อบังคับ
1. ต้องกรอกรายละเอียดของตนเองในไฟล์ `student_info.txt` โดยมีข้อมูลสำคัญที่ต้องกรอกคือ
   - รหัสนักศึกษา เช่น 678888888-8
   - รหัสวิชา เช่น ENGCE117
   - เทอมที่เรียน เช่น 2/2567
2. นักศึกษาต้องทำการเขียนโค้ดโปรแกรมที่ไฟล์ `student_program.cpp`
   
## โจทย์
จงเขียนรายละเอียดของ Prototype ต่อไปนี้
- ฟังก์ชัน reverse() โดยในฟังก์ชันนี้จะต้องทำการรับค่าภายในฟังก์ชัน จากนั้นทำการแสดงข้อความแบบกลับด้าน โดยให้แสดงทั้งในฟังก์ชันนี้ และ ภายในฟังก์ชันการทำงานหลักด้วย (ตามหลักของ Pass by reference ควรจะได้ค่าเดียวกัน)

## FIX CODE
```c++
#include <stdio.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
}//end function

```

## TEST CASE
### Input
```bash
Enter str1 : I Love You
```
### Output
```bash
FUNC : uoY evoL I
MAIN : uoY evoL I
```
