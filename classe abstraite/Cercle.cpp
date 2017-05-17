#include "Cercle.h"


int CCercle::getRadius()
{
	return this->m_radius;
}

void CCercle::setRadius(int value)
{
	this->m_radius = value;
}
//Fonction qui affiche les parametre de la figure
void CCercle::dessiner()
{
	cout << "********CERCLE*********" << endl;
	cout << "Radius: " << this->m_radius << endl;
	cout << "Aire : " << this->aire() << endl;
	cout << "Perimetre: " << this->perimetre() << endl;
}
//Return l'aire du CCercle
double CCercle::aire()
{
	return (this->m_radius^2)*M_PI;
}
//Return le perimetre du  CCercle
double CCercle::perimetre()
{
	return 2 * M_PI*this->m_radius;
}

CCercle::CCercle(int vx, int vy, int radius):CFigure(vx,vy)
{
	this->m_radius = radius;
}

CCercle::~CCercle()
{
}
