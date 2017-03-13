#ifndef __LIST_H__
#define __LIST_H__
#include "link.h"
#include <iostream>

class List																				// - класс "СПИСОК"
{
private:
	ptLink head;																		// - указатель на первое звено списка (голова)
public:
	List();																				// - конструктор инициализации
	~List();																			// - деструктор
	bool isEmpty();																		// - проверка на пустоту
	void put(const int& val);															// - добавление звена в список
	int get();																			// - удаление звена из списка, возвращает значение удаленного звена
	int peek();																			// - просмотр текущего звена
	friend std::ostream& operator<<(std::ostream& os, const List& arg);					// - вывод списка
};


#endif