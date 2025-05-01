// 流程控制

#include <iostream>

using namespace std;

int main()
{
    // for 循环
    for (int i = 0; i < 5; i++) cout << "for loop: " << i << endl;

    // c++11 新增的 for 形式
    int arr[] = { 1, 2 ,3, 4, 5 };
    for (int i : arr) cout << "for loop2: " << i << endl;
    for (int &i : arr) i++;
    for (int i : arr) cout << "for loop2 updated: " << i << endl;
    for (char c : { 'a', 'b', 'c' }) cout << "for loop2: " << c << endl;

    // while 循环
    int wi = 0;
    while (wi < 5) cout << "while loop: " << wi++ << endl;

    // do while 循环
    int di = 0;
    do cout << "do while loop: " << di++ << endl; while (di < 5);
}
