#include "Carre.h"


//Return m_longeur pour un CCarre
int CCarre::get_Bord()
{
	return this->getLongeur();
}

//Set m_longeur et m_largeur a la meme valeur 
void CCarre::set_bord(int value)
{
	this->setLargeur(value);
	this->setLongeur(value);
}

//Affiche les parmaetre des CCarre
void CCarre::dessiner()
{
	cout << "********Carre*********" << endl;
	cout << "Longeur: " << this->get_Bord() << endl;
	cout << "Aire : " << this->aire() << endl;
	cout << "Perimetre: " << this->perimetre() << endl;
}
//Calcul l'aire d'un carre
double CCarre::aire()
{
	return this->get_Bord()^2;
}
//Calcul le perimetre d'un carre
double CCarre::perimetre()
{
	return this->get_Bord()*4;
}
//Converti CCarre to CRectangle&
CRectangle & CCarre::to_base()
{
	return *this;
}


CCarre::CCarre(int vx, int vy,int longeur):CRectangle(vx,vy,longeur,longeur)
{}

CCarre::~CCarre()
{
}

