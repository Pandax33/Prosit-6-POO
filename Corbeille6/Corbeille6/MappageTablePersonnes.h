#pragma once
using namespace System;

namespace Composant {

	ref class MappageTablePersonnes
	{
	private:
		int idPersonne;
		String^ nom;
		String^ prenom;
		String^ adresse;
		String^ ville;
	public:
		MappageTablePersonnes();
		String^ Select(void);
		String^ Insert(void);
		String^ Update(void);
		String^ Delete(void);
		void setID(int);
		int getID(void);
		void setNom(String^);
		String^ getNom(void);
		void setPrenom(String^);
		String^ getPrenom(void);
		String^ getVille(void);
		void setVille(String^);
		String^ getAdresse(void);
		void setAdresse(String^);
	};

}