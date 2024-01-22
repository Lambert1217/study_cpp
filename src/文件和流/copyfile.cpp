#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // 判断参数数量
    if (argc != 3)
    {
        cout << "参数错误" << endl;
        return 1;
    }
    // 打开文件
    ifstream infile(argv[1], ios::binary);
    if (!infile.is_open())
    {
        std::cerr << "Failed to open the file for reading." << std::endl;
        return 1;
    }
    ofstream outfile(argv[2], ios::binary);
    if (!outfile.is_open())
    {
        std::cerr << "Failed to open the file for writing." << std::endl;
        return 1;
    }
    // 复制
    outfile << infile.rdbuf();

    // 关闭文件
    infile.close();
    outfile.close();
    cout << "复制完成" << endl;
}