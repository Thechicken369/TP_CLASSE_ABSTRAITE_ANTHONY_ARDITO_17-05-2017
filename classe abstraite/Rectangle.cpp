#include "Rectangle.h"



int CRectangle::getLargeur()
{
	return this->m_largeur;
}

int CRectangle::getLongeur()
{
	return this->m_longeur;
}

void CRectangle::setLargeur(int value)
{
	this->m_largeur = value;
}

void CRectangle::setLongeur(int value)
{
	this->m_longeur = value;
}
//Fonction qui affiche les parametre de la figure 
void CRectangle::dessiner()
{
	cout << "********Rectangle*********" << endl;
	cout << "Largeur: " << this->m_largeur << endl;
	cout << "Longeur: " << this->m_longeur << endl;
	cout << "Aire : " << this->aire() << endl;
	cout << "Perimetre: " << this->perimetre() << endl;
}

//Return l'aire d'un rectangle
double CRectangle::aire()
{
	return this->m_longeur*this->m_largeur;
}
//Return le perimetre d'un rectangle 
double CRectangle::perimetre()
{
	return 2*(this->m_largeur+this->m_longeur);
}



CRectangle::CRectangle(int vx, int vy, int largeur, int longeur):CFigure(vx,vy)
{
	this->m_largeur = largeur;
	this->m_longeur = longeur;

}

CRectangle::~CRectangle()
{
}
