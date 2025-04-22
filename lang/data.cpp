// 数据

#include <iostream>

using namespace std;

int main()
{
    int _v; // 声明变量
    _v = 5; // 变量赋值
    
    int __v = 5; // 声明并赋值变量

    const int V = 5; // 常量，必须在声明时初始化，不能被修改

    auto _auto = 5; // 自动类型推导，根据初始化值推导类型

    // 整型
    short s = 10;           // 至少 2 字节，一般 2 字节
    cout << "short size: " << sizeof(short) << endl;
    int i = 10;             // >= short，一般 4 字节
    cout << "int size: " << sizeof(int) << endl;
    long l = 10L;           // >= int，一般 4 字节
    cout << "long size: " << sizeof(long) << endl;
    long long ll = 10LL;    // >= long，一般 8 字节
    cout << "long long size: " << sizeof(long long) << endl;

    unsigned short us = 10;
    unsigned int ui = 10U;
    unsigned long ul = 10UL;
    unsigned long long ull = 10ULL;

    int dec_num = 10;
    int hex_num = 0x10;
    int oct_num = 010;
    int bin_num = 0b10;

    i = 42;
    cout <<  "dec: " << i << endl;
    cout << hex; // 切换为十六进制输出
    cout <<  "hex: " << i << endl;
    cout << oct; // 切换为八进制输出
    cout << "oct: " << i << endl;
    cout << dec; // 切换为十进制输出

    // 字符（一种整型）
    char c = 'a'; // 字符类型，1 字节
    c = 97;
    c = '\n';
    c = '\032';
    c = '\x1A';

    // c++ 支持 Unicode
    char 字符 = 'a';
    wchar_t wc = L'P'; // 宽字符类型，至少 2 字节
    char16_t c16 = u'P'; // 16 位无符号字符类型
    char32_t c32 = U'中'; // 32 位无符号字符类型
    // 小写 u 表示 UTF-16，大写 U 表示 UTF-32

    // 布尔类型，1 字节
    bool b1 = true;
    bool b2 = false;
    // c++ 也是用非零值和零值表示 true 和 false

    // 浮点数
    float f = 3.14F; // 单精度浮点数，至少 4 字节
    cout << "float size: " << sizeof(float) << endl;
    double d = 3.14; // 双精度浮点数，至少 6 字节，一般为 8 字节，字面量默认为 double 类型
    cout << "double size: " << sizeof(double) << endl;
    long double ld = 3.14L; // 扩展精度浮点数， 80、96 或 128 位
    cout << "long double size: " << sizeof(long double) << endl;

    f = 3.14E10; // 科学计数法
}
