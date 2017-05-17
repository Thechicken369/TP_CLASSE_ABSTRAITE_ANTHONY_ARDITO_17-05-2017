#pragma once
#include "Figure.h"
//Insertion de la lib math pour obtenir pi
#define _USE_MATH_DEFINES
#include <math.h>

class CCercle :
	public CFigure
{
private:
	int m_radius;
public:
	//Mutateur pour m_radius
	int getRadius();
	void setRadius(int value);

	//methode afficher 
	void dessiner();
	//Surchage de la methode aire() de CFigure
	double aire();
	//Surchage de la methode perimetre() de CFigure
	double perimetre();

	CCercle(int vx,int vy ,int radius);
	~CCercle();
};

