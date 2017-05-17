#pragma once
#include <iostream>

using namespace std;

class CFigure
{
private:
	int m_x;
	int m_y;
public:


	//Mutateur de m_x et m_y
	int getX();
	int getY();

	void setX(int value);
	void setY(int value);

	//Fonction d'affichage des charactéristique du point 
	virtual void dessiner();
	virtual double aire();
	virtual double perimetre();



	CFigure(int vx,int vy);
	CFigure();
	~CFigure();
};

