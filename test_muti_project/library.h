/*
Microsoft 专用
dllexport 和 dllimport 存储类特性是 C 和 C++ 语言的 Microsoft 专用扩展。 可以使用它们从 DLL 中导出或向其中导入函数、数据和对象。
*/
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API __declspec(dllimport) 
#endif
#ifndef _ZWANG
#define _ZWANG

#include <iostream>
#include <string>
namespace ZWANG
{
	using namespace std;
	MATHFUNCSDLL_API void call_from_dll(const string &str = "Call the funtion from dll."); //这条语句去掉不能生成lib
	//void call_from_dll(const string &str);
	MATHFUNCSDLL_API void hello();
	/**
		把类声明为 __declspec 关键字是有限制的，详情参见
		https://msdn.microsoft.com/zh-cn/library/81h27t8c.aspx
	*/
	class MATHFUNCSDLL_API AB
	{
	public:
		AB(int a, int b);
		void sumab();
	private:
		int a;
		int b;
	};

	/*using namespace std;
	void call_from_dll(const string &str = "Call the funtion from dll.");
	void hello();
	class AB
	{
	public:
	    AB(int a, int b);
	    void sumab();
	private:
		int a;
		int b;
	};

	AB::AB(int a, int b)
	{
		this->a = a;
		this->b = b;
	}*/
}
#endif //_ZWANG