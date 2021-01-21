#include "user.h"

user::user()
{
	life = 3;
}

void user::setLife(int life)
{
	this->life = life;
}

int user::getLife()
{
	return this->life;
}


