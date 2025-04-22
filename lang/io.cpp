#include <iostream>

int main()
{
    using namespace std;

    string name;

    cout << "请输入你的名字：";
    cin >> name;
    cout << "你好，" << name << "！" << sizeof(int) << endl;
}
