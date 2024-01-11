#pragma once
class Tonneaux
{
private:
	int contenance, contenu=0;

public:
	void remplir();
	void vider();
	void tranferer(Tonneaux dest);
	void affTonneau();
	int getContenu();
	int getContenance();
	Tonneaux(int capacite); //constructeur avec un parametre de contenant

};

