#include "list.h"

List::List()
{
	head = NULL;
}
List::~List()
{
	while (head != NULL)																	// - пока по адресу не будет пусто
	{
		ptLink tmp = head->next;															// - сохраняем адрес следующего звена
		delete head;																		// - удаляем текущее звено
		head = tmp;																			// - идем дальше по списку
	}
}
bool List::isEmpty()
{
	return (head == NULL);
}
void List::put(const int& _value)
{
	ptLink newLink = new Link;																// - выделяем под новое звено память
	newLink->setValue(_value);																// - записываем значение в новое звено
	newLink->setNext(head);																	// - указываем, что след. звено находится по адр. head
	head = newLink;																			// - указываем, что новое звено является головой списка
}
int List::get()
{
	if (!isEmpty())																			// - если список не пуст
	{
		/*int retVal = head->getValue();													// - сохраняем значение удаляемого звена
		ptLink tmp = head->getNext();														// - и адрес следующего звена
		delete head;																		// - удаляем текущее звено
		head = tmp;		*/																	// - первым звеном становится след. звено
		ptLink tmp = head;
		int retVal = head->getValue();
		head = head->getNext();																//	- ГЕРГЕЛЬ
		delete tmp;
		return retVal;
	}
	else																					// - иначе вернуть нуль (я лох и не умею в код завершения =))) )
		return 0;
}
int List::peek()
{
	return head->getValue();
}
std::ostream& operator<<(std::ostream& os, const List& arg)
{
	ptLink tmp = arg.head;																	// - идем в начало списка
	while (tmp != NULL)																		// - пока по адресу не пусто (есть следующее звено)
	{	
		os << tmp->getValue() << ' ';														// - запихиваем в поток вывода значение текущего звена
		tmp = tmp->getNext();																// - идем дальше по списку
	}
	return os;																				// - возвращаем поток вывода
}
