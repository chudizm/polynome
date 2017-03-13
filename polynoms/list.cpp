#include "list.h"

List::List()
{
	head = NULL;
}
List::~List()
{
	while (head != NULL)																// - пока по адресу не будет пусто
	{
		ptLink tmp = head->next;														// - сохраняем адрес следующего звена
		delete head;																	// - удаляем текущий элемент
		head = tmp;																		// - идем дальше по списку
	}
}
void List::add(const int& _value)
{
	ptLink newLink = new Link;															// - выделяем под новое звено память
	newLink->value = _value;															// - записываем значение в новое звено
	newLink->next = head;																// - указываем, что след. звено находится по адр. head
	head = newLink;																		// - указываем, что новое звено является головой списка
}
std::ostream& operator<<(std::ostream& os, const List& arg)
{
	ptLink tmp = arg.head;																// - идем в начало списка
	while (tmp != NULL)																	// - пока по адресу не пусто (есть следующее звено)
	{
		os << tmp->getValue() << ' ';													// - запихиваем в поток вывода значение текущего звена
		tmp = tmp->getNext();															// - идем дальше по списку
	}
	return os;																			// - возвращаем поток вывода
}
