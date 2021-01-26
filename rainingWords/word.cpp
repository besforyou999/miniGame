#include "word.h"

string word::getName()
{
	return name;
}

int word::getPosX()
{
	return x;
}

int word::getPosY()
{
	return y;
}

void word::setName(string newName)
{
	name = newName;
	return ;
}

void word::setPosX(int x)
{
	this->x = x;
}

void word::setPosY(int y)
{
	 this->y = y;
}




