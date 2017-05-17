#include "Figure.h"


int CFigure::getX()
{
	return this->m_x;
}

int CFigure::getY()
{
	return this->m_y;
}

void CFigure::setX(int value)
{
	this->m_x = value;
}

void CFigure::setY(int value)
{
	this->m_y = value;
}

void CFigure::dessiner()
{
	cout << "Absysse X= " << this->m_x << endl;
	cout << "Ordonnee Y= " << this->m_y << endl;
}

double CFigure::aire()
{
	return 0.0;
}

double CFigure::perimetre()
{
	return 0.0;
}

CFigure::CFigure(int vx, int vy)
{
	this->m_x = vx;
	this->m_y = vy;
}

CFigure::CFigure()
{
	this->m_x = 0;
	this->m_y = 0;
}

CFigure::~CFigure()
{
}
