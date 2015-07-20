#include "library.h"
namespace ZWANG
{
	void call_from_dll(const string &str)
	{
		cout << str << endl;
		//cout << "Success!" << endl;
	}

	void hello()
	{
		cout << "我是动态链接库中的文件！" << endl;
	}

	AB::AB(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	void AB::sumab()
	{
		cout << "a + b = " << this->a + this->b << endl;
	}
}

//这样无法执行
//void ZWANG::call_from_dll(const string &str)
//{
//	cout << str << endl;
//	//cout << "Success!" << endl;
//}