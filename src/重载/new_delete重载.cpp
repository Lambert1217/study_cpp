#include <iostream>
using namespace std;

class Rect
{
private:
    int x, y;
    int w, h;

public:
    void *operator new(size_t size)
    {
        cout << "重载 Rect new  | size = " << size << endl;
        auto men = malloc(size);
        if (!men)
        {
            throw std::bad_alloc();
        }
        return men;
    }
    void *operator new[](size_t size)
    {
        cout << "重载 Rect new[] | size = " << size << endl;
        auto men = malloc(size);
        if (!men)
        {
            throw std::bad_alloc();
        }
        return men;
    }
    void operator delete(void *ptr)
    {
        cout << "重载 Rect delete" << endl;
        free(ptr);
    }
    void operator delete[](void *ptr)
    {
        cout << "重载 Rect delete[]" << endl;
        free(ptr);
    }
};

int main()
{
    Rect *rect1 = new Rect();
    Rect *rect2 = new Rect[10];

    delete rect1;
    delete[] rect2;
    return 0;
}