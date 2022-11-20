#pragma once
#include "MappageTableAdresse.h"
#include "AccesAuxDonnees.h"
#include "MappageTablePersonnes.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace Composant;
namespace service{

ref class gestion
{
private:
	AccesAuxDonnees^ Acces;
	MappageTablePersonnes^ Map;
	DataSet^ data;
	DataSet^ dataAdresse;
	MappageTableAdresse^ MapAdresse;
public:
	gestion();
	DataSet^ listePersonnes(String^);
	int ajouter(String^, String^);
	void modifier(int, String^, String^,String^, String^);
	int ajouterAdresse(String^, String^);
	void supprimer(int);
	DataSet^ listeAdresse(String^);

};

}