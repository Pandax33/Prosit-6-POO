#include "MappageTablePersonnes.h"
namespace Composant
{
	MappageTablePersonnes::MappageTablePersonnes(void)
	{
		this->idPersonne = -1;
		this->nom = "RIEN";
		this->prenom = "RIEN";
	}
	String^ MappageTablePersonnes::Select(void)
	{
		return "SELECT id_personne, nom, prenom " +
			"FROM TB_PERSONNE;";
	}
	String^ MappageTablePersonnes::Insert(void)
	{
		return "INSERT INTO TB_PERSONNE " +
			"(nom, prenom) " +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
	}
	String^ MappageTablePersonnes::Update(void)
	{
		return "UPDATE TB_PERSONNE " +
			"SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
			"WHERE(id_personne = " + this->getID() + ");";
	}
	String^ MappageTablePersonnes::Delete(void)
	{
		return "DELETE FROM TB_PERSONNE " +
			"WHERE(id_personne = " + this->getID() + ");";
	}
	void MappageTablePersonnes::setID(int id_personne)
	{
		if (id_personne > 0)
		{
			this->idPersonne = id_personne;
		}
	}
	void MappageTablePersonnes::setPrenom(String^ prenom)
	{
		if (prenom != "")
		{
			this->prenom = prenom;
		}
	}
	void MappageTablePersonnes::setNom(String^ nom)
	{
		if (nom != "")
		{
			this->nom = nom;
		}
	}
	int MappageTablePersonnes::getID(void)
	{
		return this->idPersonne;
	}
	String^ MappageTablePersonnes::getNom(void)
	{
		return this->nom;
	}
	String^ MappageTablePersonnes::getPrenom(void)
	{
		return this->prenom;
	}
	void MappageTablePersonnes::setVille(String^ ville)
	{
		if (ville != "")
		{
			this->ville=ville;
		}
	}
	void MappageTablePersonnes::setAdresse(String^ adresse)
	{
		if (adresse != "")
		{
			this->adresse = adresse;
		}
	}
	String^ MappageTablePersonnes::getVille(void)
	{
		return this->ville;
	}
	String^ MappageTablePersonnes::getAdresse(void)
	{
		return this->adresse;
	}
}
