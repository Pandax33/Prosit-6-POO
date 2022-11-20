#include "MappageTableAdresse.h"

namespace Composant {
	MappageTableAdresse::MappageTableAdresse(){
		this->id = -1;
		this->adresse = "RIEN";
		this->ville = "RIEN";
	}
	String^ MappageTableAdresse::SelectAdresse(void)
	{
		return "SELECT id_personne, adresse, ville " +
			"FROM adresse;";
	}
	String^ MappageTableAdresse::InsertAdresse(void)
	{
		return "INSERT INTO adresse " +
			"(adresse, ville) " +
			"VALUES('" + this->getAdresse() + "', '" + this->getVille() + "');SELECT @@IDENTITY;";
	}
	String^ MappageTableAdresse::UpdateAdresse(void)
	{
		return "UPDATE adresse " +
			"SET adresse = '" + this->getAdresse() + "', ville = '" + this->getVille() + "' " +
			"WHERE(id_personne = " + this->getIDAdresse() + ");";
	}
	String^ MappageTableAdresse::DeleteAdresse(void)
	{
		return "DELETE FROM adresse " +
			"WHERE(id_personne = " + this->getIDAdresse() + ");";
	}
	void MappageTableAdresse::setIDAdresse(int id_personne)
	{
		if (id_personne > 0)
		{
			this->id = id_personne;
		}
	}
	int MappageTableAdresse::getIDAdresse() {
		return this->id;
	}
	void MappageTableAdresse::setAdresse(String^ id_personne)
	{
		if (id_personne != "")
		{
			this->adresse = id_personne;
		}
	}
	String^ MappageTableAdresse::getAdresse() {
		return this->adresse;
	}
	void MappageTableAdresse::setVille(String^ id_personne)
	{
		if (id_personne != "")
		{
			this->ville = id_personne;
		}
	}
	String^ MappageTableAdresse::getVille() {
		return this->ville;
	}
	
}