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
		cout << "���Ƕ�̬���ӿ��е��ļ���" << endl;
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

//�����޷�ִ��
//void ZWANG::call_from_dll(const string &str)
//{
//	cout << str << endl;
//	//cout << "Success!" << endl;
//}