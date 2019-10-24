// CplusplusConsole.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>  
using namespace std;

#define MyTe  564;


int main()
{
#pragma region Hello World
	cout << "Hello World!\n"; // std::cout << "Hello World!\n"; std:: 等同于 using namespace std;的引用
#pragma endregion

#if false
#pragma region 代码块条件

	int condition = 0;

#if condition==0
	cout << "Hello World0!\n"; // std::cout << "Hello World!\n"; std:: 等同于 using namespace std;的引用
#endif

#pragma endregion

#pragma region 获取各数据类型属性

	// getInfo();
#pragma endregion

#pragma region 自定义参数类型

	// getInfo();
#pragma endregion

#pragma region 已有数据类别名
	typedef int feet;
	feet distance = 90;
	wcout << "长度为：";
	wcout << distance << endl;
#pragma endregion

#endif

#pragma region 定义枚举类型
	enum color {red=80,black,yellow,blue} c;
	c = black;
	cout << "当前颜色为：";
	cout << c << endl;
#pragma endregion

#pragma region define指令定义全局变量

	cout << "MyTe值：";
	cout << MyTe;
	cout << endl;
#pragma endregion

#pragma region 有符号整数与无符号整数之间的差别
	short int i;
	short unsigned int j;
	j = 300;

	i = j;
	cout << i << " " << j;



#pragma endregion



	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
