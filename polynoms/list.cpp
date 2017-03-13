#include "list.h"

List::List()
{
	head = NULL;
}
List::~List()
{
	while (head != NULL)																// - ���� �� ������ �� ����� �����
	{
		ptLink tmp = head->next;														// - ��������� ����� ���������� �����
		delete head;																	// - ������� ������� �������
		head = tmp;																		// - ���� ������ �� ������
	}
}
void List::add(const int& _value)
{
	ptLink newLink = new Link;															// - �������� ��� ����� ����� ������
	newLink->value = _value;															// - ���������� �������� � ����� �����
	newLink->next = head;																// - ���������, ��� ����. ����� ��������� �� ���. head
	head = newLink;																		// - ���������, ��� ����� ����� �������� ������� ������
}
std::ostream& operator<<(std::ostream& os, const List& arg)
{
	ptLink tmp = arg.head;																// - ���� � ������ ������
	while (tmp != NULL)																	// - ���� �� ������ �� ����� (���� ��������� �����)
	{
		os << tmp->getValue() << ' ';													// - ���������� � ����� ������ �������� �������� �����
		tmp = tmp->getNext();															// - ���� ������ �� ������
	}
	return os;																			// - ���������� ����� ������
}
