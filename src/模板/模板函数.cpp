#include <iostream>

using namespace std;

typedef struct student
{
    char name[10];
    unsigned char age;
    unsigned char score;
} studentType;

bool operator>(const studentType &stu1, studentType &stu2)
{
    return stu1.score > stu2.score;
}

ostream &operator<<(ostream &myout, const student &stu)
{
    myout << stu.name << ":" << +stu.score << endl;
    return myout;
}
// 模板函数
template <typename Temp>
Temp Max(Temp x, Temp y)
{
    return x > y ? x : y;
}

int main()
{

    int a_int = 10;
    int b_int = 20;
    cout << Max(a_int, b_int) << endl;

    double a_double = 3.22;
    double b_double = 2.33;
    cout << Max(a_double, b_double) << endl;

    studentType stu1{
        .name = "Bob",
        .age = 20,
        .score = 60};
    studentType stu2{
        .name = "Tom",
        .age = 20,
        .score = 100};
    cout << Max(stu1, stu2) << endl;

    return 0;
}