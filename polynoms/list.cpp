#include "list.h"

List::List()
{
	head = NULL;
}
List::~List()
{
	while (head != NULL)																	// - ���� �� ������ �� ����� �����
	{
		ptLink tmp = head->next;															// - ��������� ����� ���������� �����
		delete head;																		// - ������� ������� �����
		head = tmp;																			// - ���� ������ �� ������
	}
}
bool List::isEmpty()
{
	return (head == NULL);
}
void List::put(const int& _value)
{
	ptLink newLink = new Link;																// - �������� ��� ����� ����� ������
	newLink->setValue(_value);																// - ���������� �������� � ����� �����
	newLink->setNext(head);																	// - ���������, ��� ����. ����� ��������� �� ���. head
	head = newLink;																			// - ���������, ��� ����� ����� �������� ������� ������
}
int List::get()
{
	if (!isEmpty())																			// - ���� ������ �� ����
	{
		/*int retVal = head->getValue();													// - ��������� �������� ���������� �����
		ptLink tmp = head->getNext();														// - � ����� ���������� �����
		delete head;																		// - ������� ������� �����
		head = tmp;		*/																	// - ������ ������ ���������� ����. �����
		ptLink tmp = head;
		int retVal = head->getValue();
		head = head->getNext();																//	- �������
		delete tmp;
		return retVal;
	}
	else																					// - ����� ������� ���� (� ��� � �� ���� � ��� ���������� =))) )
		return 0;
}
int List::peek()
{
	return head->getValue();
}
std::ostream& operator<<(std::ostream& os, const List& arg)
{
	ptLink tmp = arg.head;																	// - ���� � ������ ������
	while (tmp != NULL)																		// - ���� �� ������ �� ����� (���� ��������� �����)
	{	
		os << tmp->getValue() << ' ';														// - ���������� � ����� ������ �������� �������� �����
		tmp = tmp->getNext();																// - ���� ������ �� ������
	}
	return os;																				// - ���������� ����� ������
}
