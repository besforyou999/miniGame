#include "word.h"

string word::getString()
{
	return this->s;
}

void word::setString(string s)
{
	this->s = s;
}


int word::getPosX()
{
	return this->x;
}

int word::getPosY()
{
	return this->y;
}

void setPosX(int x)
{
	this->x = x;
}

void setPosY(int y)
{
	this->y = y;
}


