/*
Learning structures.
*/

// Some examples
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    int roll_number;
    float average_grade;
}; // Do not forget semicolon here!

struct Point2D
{
    int x;
    int y;
};

struct Point2D createPoint(int x, int y)
{
    struct Point2D point;
    point.x = x;
    point.y = y;
    return point;
}

void structure_student()
{
    struct Student student1 = {"John", 18, 101, 85.5};
    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Roll Number: %d\n", student1.roll_number);
    printf("Average Grade: %.2f\n", student1.average_grade);
}

void structure_point2d()
{
    struct Point2D point = {3, 8};
    printf("X coordinate: %d\n", point.x);
    printf("Y coordinate: %d\n", point.y);
}


void print_point(struct Point2D p)
{
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}

int main()
{
    structure_student(); // First example.
    printf("\n");
    structure_point2d(); // Second example.
    printf("\n");
    struct Point2D my_point = {3, 8};
    print_point(my_point);
    struct Point2D point = createPoint(2,3);
    print_point(point);
    return 0;
}