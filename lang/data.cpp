// 数据

#include <iostream>
#include <vector>
#include <array>

using namespace std;

typedef char* byte_p; // 为一个类型声明别名

int main()
{
    int _v; // 声明变量
    _v = 5; // 变量赋值

    int x, y; // 声明多个变量
    
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
    wchar_t wc = L'P';      // 宽字符类型，至少 2 字节
    char16_t c16 = u'P';    // 16 位无符号字符类型
    char32_t c32 = U'中';   // 32 位无符号字符类型
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

    // 数组
    int arr[5] = { 1, 2, 3 }; // 声明有五个元素的数组，只初始化前三个元素
    int arr2[] = { 1, 2, 3 }; // 声明有三个元素的数组

    // 字符串
    char hello[] = "hello"; // ['h', 'e', 'l', 'l', 'o', '\0']
    char ca[] = "Hello, " "world!"; // 字符串拼接

    // string 声明一个字符串对象，内部包含一个字符数组
    string str = "Hello, world!";
    string r = R"(raw string)"; // 以 R"()" 包裹的字符串是原始字符串
    r = R"+*(this string include )".)+*";

    // 结构体
    struct product
    {
        char name[20];
        double price;
    };
    
    product hat = { "hat", 30.0 };
    product glass { "glass", 50.0 };
    cout << hat.name << ": $" << hat.price << endl;
    cout << glass.name << ": $" << glass.price << endl;

    // 位字段
    struct bits
    {
        unsigned int flag: 4;   // 4 bits 值
        unsigned int: 4;        // 4 bits 不使用
        bool isXXX: 1;          // 1 bit 布尔值
        unsigned int: 3;        // 3 bits 不使用，用于内存对齐
    };

    // 联合体
    union uni_val
    {
        int int_val;
        long long long_val;
    };

    cout << sizeof(uni_val) << endl; // 8 bytes

    struct table
    {
        union
        {
            int id_num;
            char id_str[20];
        };
        string name;
    };

    table tab = { 97, "user" };

    cout << "id_num: " << tab.id_num << ", id_str: " << tab.id_str << ", name: " << tab.name << endl;
    cout << sizeof(table) << endl;

    // 枚举
    enum color { red, yellow = 2, blue };
    color green = red;
    cout << "red: " << red << ", yellow: " << yellow << ", blue: " << blue << ", green: " << green << endl;

    // 指针
    product *hat_p = &hat;
    product *glass_p = &glass;
    cout << (*hat_p).name << "   in: " << hat_p << endl;
    cout << glass_p->name << " in: " << glass_p << endl;

    int *int_p = new int;           // 分配一个 int 大小的内存，相当于 malloc
    delete int_p;                   // 释放内存，相当于 free
    int *arr_p = new int[10];
    delete [] arr_p;                // 释放数组需要加中括号
    product *obj_p = new product;
    delete obj_p;
    obj_p = nullptr;                // delete 之后原指针不会被删除，将该指针指向空地址防止双重释放

    // vector
    vector<int> vi(10); // 创建一个有 10 个元素的 int 向量
    vi[1] = 2;
    // array
    array<int, 5> ai = { 1, 2, 3 }; // 声明一个有 5 个元素的 int 数组对象，声明数组的数量必须是常数
}
