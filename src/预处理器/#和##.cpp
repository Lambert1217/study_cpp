#include <iostream>

// #x  会把x转化为 "x"
#define ToStr(x) #x
// x##y 会把两个链接 xy
#define concat(x, y) x##y

using namespace std;

int main(void)
{
    int x1 = 100;
    cout << ToStr(HELLO WORLD !) << endl;
    cout << concat(x, 1) << endl;
    return 0;
}