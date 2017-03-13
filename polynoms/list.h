#ifndef __LIST_H__
#define __LIST_H__
#include "link.h"
#include <iostream>

class List;																				// - �������� ������

class List																				// - ����� "������"
{
private:
	ptLink head;																		// - ��������� �� ������ ����� ������ (������)
public:
	List();																				// - ����������� �������������
	~List();																			// - ����������
	void add(const int& val);															// - ���������� ����� � ������
	friend std::ostream& operator<<(std::ostream& os, const List& arg);					// - ����� ������
};


#endif