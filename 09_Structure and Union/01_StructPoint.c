// Struct Point {
//     int x;
//     int y;

// };

// struct Point P = {3,4};

// [1000] 3    // p.x
// [1004] 4    // p.y
#include <stdio.h>

struct student{
    int age;
    char grade;
    char str[50];
};

int main() {
struct student s = {15, 'B', "Hello"};
printf("The age of student is %d, the grade is %c name is %s \n", s.age, s.grade, s.str);

return 0;
}