#include <iostream>
#include "list.h"

using namespace std;

void main()
{
	//--------------------TEST-LINK-------------------
					/*	 Link A(5);
	cout << "Link A.Value = " << A.getValue() << endl;*/
	//---------------------PASSED---------------------
	//--------------------TEST-LIST-------------------
					List A;
	for (int i = 1; i < 11; i++)
		A.put(i);
	cout << A << endl;
	A.get();
	cout << A << A.peek() << A.get() << endl;
	//---------------------PASSED---------------------


	system("pause");
	return;
}