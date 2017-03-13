#ifndef __LINK_H__
#define __LINK_H__
#define NULL 0																			// - почему-то в MVS2015 не определен NULL, лмао

class Link;																				// - прототип класса
typedef Link* ptLink;

class Link																				// - класс "ЗВЕНО"
{
private:
	int value;																			// - значение звена
	ptLink next;																		// - указатель на следующее звено
public:
	Link(const int& _value = 0);														// - конструктор инициализации
	void setValue(const int& _value);													// - установить новое значение звена
	int getValue();																		// - вернуть текущее значение звена
	void setNext(ptLink _next);															// - установить новый указатель на следующее звено
	ptLink getNext();																	// - вернуть текущий указатель на следующее звено
	friend class List;
};
#endif