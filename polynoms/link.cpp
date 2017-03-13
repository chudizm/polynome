#include "link.h"

Link::Link(const int& _value)
{
	value = _value;
	next = NULL;
}
void Link::setValue(const int& _value)
{
	value = _value;
}
int Link::getValue()
{
	return value;
}
void Link::setNext(ptLink _next)
{
	next = _next;
}
ptLink Link::getNext()
{
	return next;
}
