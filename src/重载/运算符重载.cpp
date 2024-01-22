#include <iostream>
using namespace std;

class Box
{
public:
    double getVolume(void)
    {
        return length * breadth * height;
    }
    void setLength(double len)
    {
        length = len;
    }

    void setBreadth(double bre)
    {
        breadth = bre;
    }

    void setHeight(double hei)
    {
        height = hei;
    }
    // 重载 + 运算符，用于把两个 Box 对象相加
    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
    Box operator*(const Box &b)
    {
        Box box;
        box.length = this->length * b.length;
        box.breadth = this->breadth * b.breadth;
        box.height = this->height * b.height;
        return box;
    }

private:
    double length;  // 长度
    double breadth; // 宽度
    double height;  // 高度
};
// 程序的主函数
int main()
{
    Box Box1;            // 声明 Box1，类型为 Box
    Box Box2;            // 声明 Box2，类型为 Box
    Box Box3;            // 声明 Box3，类型为 Box
    double volume = 0.0; // 把体积存储在该变量中

    // Box1 详述
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // Box2 详述
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // Box1 的体积
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // Box2 的体积
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // 把两个对象相加，得到 Box3
    Box3 = Box1 + Box2;

    // Box3 的体积
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}

/*
    下面是可重载的运算符列表：

    双目算术运算符	    + (加)，-(减)，*(乘)，/(除)，% (取模)
    关系运算符	        ==(等于)，!= (不等于)，< (小于)，> (大于)，<=(小于等于)，>=(大于等于)
    逻辑运算符	        ||(逻辑或)，&&(逻辑与)，!(逻辑非)
    单目运算符	        + (正)，-(负)，*(指针)，&(取地址)
    自增自减运算符	    ++(自增)，--(自减)
    位运算符	        | (按位或)，& (按位与)，~(按位取反)，^(按位异或),，<< (左移)，>>(右移)
    赋值运算符	        =, +=, -=, *=, /= , % = , &=, |=, ^=, <<=, >>=
    空间申请与释放      new, delete, new[ ] , delete[]
    其他运算符	        ()(函数调用)，->(成员访问)，,(逗号)，[](下标)

    下面是不可重载的运算符列表：

    .：成员访问运算符
    .*, ->*：成员指针访问运算符
    ::：域运算符
    sizeof：长度运算符
    ?:：条件运算符
    #： 预处理符号
*/