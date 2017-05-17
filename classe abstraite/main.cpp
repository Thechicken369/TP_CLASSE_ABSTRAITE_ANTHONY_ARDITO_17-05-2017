#include "Figure.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Carre.h"
#include <list>

int main() {

	//Instanciation d'objet 
	CRectangle r1 = CRectangle(10, 20, 15, 4);
	CCercle c1 = CCercle(10, 30, 50);
	CCarre ca1 = CCarre(10, 20, 50);
	
	//Containers de formes 
	CFigure* forme[3] = { &c1,&r1,&ca1.to_base() };
	
	//Parcours de ma liste de forme 
	//affiche chaque ellement de la list 
	for (int i = 0; i < 3; i++)
	{
		forme[i]->dessiner();
	}

	//ca1.dessiner();

	//c1.dessiner();

	//r1.dessiner();

	system("pause");
	return 0;
}
