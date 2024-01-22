#include <iostream>
#include <string>

using namespace std;
/*
    new data-type;
    data-type 可以是包括数组在内的任意内置的数据类型，也可以是包括类或结构在内的用户自定义的任何数据类型。
*/

struct student
{
    string name;
    int age;
};

ostream &operator<<(ostream &Myout, const student stu)
{
    Myout << "name : " << stu.name << "\t";
    Myout << "age : " << stu.age << endl;
    return Myout;
}

int main()
{
    // 单个
    // 内置
    int *x = NULL;
    x = new int(20);
    cout << *x << endl;

    // 自定义
    student *stu = new student;
    stu->age = 20;
    stu->name = "Bob";
    cout << *stu;

    // 一维数组
    // 内置
    int *arr_int = new int[10];
    delete[] arr_int;

    // 自定义
    student *arr_stu = new student[10];
    delete[] arr_stu;

    // 二维数组 [M][N]
    const int M = 5;
    const int N = 5;
    int i, j;
    // new
    int **arr_int2 = new int *[M];
    for (i = 0; i < M; i++)
    {
        arr_int2[i] = new int[N];
    }
    // 赋值
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            arr_int2[i][j] = j * i;
        }
    }
    // 打印数据
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (j == 0)
                cout << endl;
            cout << arr_int2[i][j] << "\t";
        }
    }
    // delete
    for (int i = 0; i < M; i++)
    {
        delete[] arr_int2[i];
    }
    delete[] arr_int2;

    // 三维数组类似

    return 0;
}