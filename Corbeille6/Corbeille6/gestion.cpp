#include "gestion.h"
namespace service
{
	gestion::gestion(void)
	{
		this->Acces = gcnew Composant::AccesAuxDonnees();
		this->Map = gcnew Composant::MappageTablePersonnes();
		this->data = gcnew Data::DataSet();
		this->dataAdresse = gcnew Data::DataSet();
		this->MapAdresse = gcnew Composant::MappageTableAdresse();
	}
	DataSet^ gestion::listePersonnes(String^ Table)
	{
		this->data->Clear();
		this->data = this->Acces->getRows(this->Map->Select(), Table);
		return this->data;
	}
	DataSet^ gestion::listeAdresse(String^ Table)
	{
		this->dataAdresse->Clear();
		this->dataAdresse = this->Acces->getRows(this->MapAdresse->SelectAdresse(), Table);
		return this->dataAdresse;
	}
	int gestion::ajouter(String^ nom, String^ prenom)
	{
		int id_personne;
		this->Map->setNom(nom);
		this->Map->setPrenom(prenom);
		id_personne = this->Acces->actionRowID(this->Map->Insert());
		return id_personne;
	}
	void gestion::modifier(int id_personne, String^ nom, String^ prenom, String^ adresse, String^ ville)
	{
		this->Map->setID(id_personne);
		this->Map->setNom(nom);
		this->Map->setPrenom(prenom);
		this->Acces->actionRows(this->Map->Update());
		this->MapAdresse->setAdresse(adresse);
		this->MapAdresse->setVille(ville);
		this->Acces->actionRows(this->MapAdresse->UpdateAdresse());
	}
	void gestion::supprimer(int id_personne)
	{
		this->Map->setID(id_personne);
		this->Acces->actionRows(this->Map->Delete());
		this->MapAdresse->setIDAdresse(id_personne);
		this->Acces->actionRows(this->MapAdresse->DeleteAdresse());
	}
	int gestion::ajouterAdresse(String^ adresse, String^ ville) {
		int id_personne;
		this->MapAdresse->setAdresse(adresse);
		this->MapAdresse->setVille(ville);
		id_personne = this->Acces->actionRowID(this->MapAdresse->InsertAdresse());
		return id_personne;
	}

}
