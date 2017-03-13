#ifndef __LIST_H__
#define __LIST_H__
#include "link.h"
#include <iostream>

class List;																				// - прототип класса

class List																				// - класс "СПИСОК"
{
private:
	ptLink head;																		// - указатель на первое звено списка (голова)
public:
	List();																				// - конструктор инициализации
	~List();																			// - деструктор
	void add(const int& val);															// - добавление звена в список
	friend std::ostream& operator<<(std::ostream& os, const List& arg);					// - вывод списка
};


#endif