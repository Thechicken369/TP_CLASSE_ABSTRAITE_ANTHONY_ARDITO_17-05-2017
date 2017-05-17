#pragma once
#include "Figure.h"
class CRectangle :
	public CFigure
{
private:
	int m_largeur;
	int m_longeur;
public:
	//Mutateur m_largeur et m_longeur
	int getLargeur();
	int getLongeur();

	void setLargeur(int value);
	void setLongeur(int value);

	//methode afficher 
	void dessiner();
	//Surchage de la methode aire() de CFigure
	double aire();
	//Surchage de la methode perimetre() de CFigure
	double perimetre();


	//Constructeur surcharger de CFRectangle
	CRectangle(int vx,int vy,int largeur,int longeur);


	~CRectangle();
};

