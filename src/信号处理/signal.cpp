#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);
}

int main()
{
    // 注册信号 SIGINT 和信号处理程序
    // 这个函数接收两个参数：第一个参数是要设置的信号的标识符，第二个参数是指向信号处理函数的指针。函数返回值是一个指向先前信号处理函数的指针。如果先前没有设置信号处理函数，则返回值为 SIG_DFL。如果先前设置的信号处理函数为 SIG_IGN，则返回值为 SIG_IGN。
    signal(SIGINT, signalHandler);

    while (1)
    {
        cout << "Going to sleep...." << endl;
        sleep(1);
    }

    return 0;
}

/*
C++ 头文件 <csignal> 中
SIGABRT	程序的异常终止，如调用 abort。
SIGFPE	错误的算术运算，比如除以零或导致溢出的操作。
SIGILL	检测非法指令。
SIGINT	程序终止(interrupt)信号。
SIGSEGV	非法访问内存。
SIGTERM	发送到程序的终止请求。
*/