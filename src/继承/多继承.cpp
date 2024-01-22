#include <iostream>

using namespace std;

/*
    多继承即一个子类可以有多个父类，它继承了多个父类的特性。

    C++ 类可以从多个类继承成员，语法如下：

    class <派生类名>:<继承方式1><基类名1>,<继承方式2><基类名2>,…
    {
    <派生类类体>
    };
*/

// 基类 Shape
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

// 基类 PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

// 派生类
class Rectangle : public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    Rectangle Rect;
    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;

    // 输出总花费
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;

    return 0;
}