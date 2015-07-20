/*
Microsoft ר��
dllexport �� dllimport �洢�������� C �� C++ ���Ե� Microsoft ר����չ�� ����ʹ�����Ǵ� DLL �е����������е��뺯�������ݺͶ���
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
	MATHFUNCSDLL_API void call_from_dll(const string &str = "Call the funtion from dll."); //�������ȥ����������lib
	//void call_from_dll(const string &str);
	MATHFUNCSDLL_API void hello();
	/**
		��������Ϊ __declspec �ؼ����������Ƶģ�����μ�
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