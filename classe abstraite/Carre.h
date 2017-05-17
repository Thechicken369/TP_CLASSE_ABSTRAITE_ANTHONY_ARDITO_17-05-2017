#pragma once
#include "Rectangle.h"
class CCarre : 
	private CRectangle
{
public:
	//Mutateur pour la longeur du carre
	int get_Bord();
	void set_bord(int value);


	//methode afficher 
	void dessiner();
	//Surchage de la methode aire() de CFigure
	double aire();
	//Surchage de la methode perimetre() de CFigure
	double perimetre();

	//Fonction permet la conversion de CCarre vers CRectangle
	 CRectangle& to_base();

	 //Constructeur surcharger 
	CCarre(int vx,int vy,int longeur);
	~CCarre();
};

