#include "library.h"
#include<iostream>
using namespace std;
#pragma comment(lib,"test_muti_project.lib")
//using namespace ZWANG;
int main(void)
{
	ZWANG::call_from_dll("Hello world!");
	ZWANG::call_from_dll();
	ZWANG::hello();
	ZWANG::AB obj(2,3);
	obj.sumab();
	return 0;
}