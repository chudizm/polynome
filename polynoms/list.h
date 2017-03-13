#ifndef __LIST_H__
#define __LIST_H__
#include "link.h"
#include <iostream>

class List																				// - ����� "������"
{
private:
	ptLink head;																		// - ��������� �� ������ ����� ������ (������)
public:
	List();																				// - ����������� �������������
	~List();																			// - ����������
	bool isEmpty();																		// - �������� �� �������
	void put(const int& val);															// - ���������� ����� � ������
	int get();																			// - �������� ����� �� ������, ���������� �������� ���������� �����
	int peek();																			// - �������� �������� �����
	friend std::ostream& operator<<(std::ostream& os, const List& arg);					// - ����� ������
};


#endif