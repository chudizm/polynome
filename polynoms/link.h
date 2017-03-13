#ifndef __LINK_H__
#define __LINK_H__
#define NULL 0																			// - ������-�� � MVS2015 �� ��������� NULL, ����

class Link;																				// - �������� ������
typedef Link* ptLink;

class Link																				// - ����� "�����"
{
private:
	int value;																			// - �������� �����
	ptLink next;																		// - ��������� �� ��������� �����
public:
	Link(const int& _value = 0);														// - ����������� �������������
	void setValue(const int& _value);													// - ���������� ����� �������� �����
	int getValue();																		// - ������� ������� �������� �����
	void setNext(ptLink _next);															// - ���������� ����� ��������� �� ��������� �����
	ptLink getNext();																	// - ������� ������� ��������� �� ��������� �����
	friend class List;
};
#endif