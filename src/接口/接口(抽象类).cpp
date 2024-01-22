class Box
{
public:
    // 纯虚函数
    virtual double getVolume() = 0;

private:
    double length;  // 长度
    double breadth; // 宽度
    double height;  // 高度
};

/*
    C++ 接口（抽象类）
    接口描述了类的行为和功能，而不需要完成类的特定实现。

    C++ 接口是使用抽象类来实现的，抽象类与数据抽象互不混淆，数据抽象是一个把实现细节与相关的数据分离开的概念。

    如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的，如上。
*/