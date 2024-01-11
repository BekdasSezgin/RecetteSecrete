#include "Tonneaux.h"

void Tonneaux::remplir()
{
	contenu = contenance;
}

void Tonneaux::vider()
{
	contenu = 0;
}

void Tonneaux::tranferer(Tonneaux dest)
{
	contenu += contenance;
}

int Tonneaux::getContenu()
{
	return contenu;
}

int Tonneaux::getContenance()
{
	return contenance;
}
