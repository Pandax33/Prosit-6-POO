#pragma once
#include "MappageTablePersonnes.h"
namespace Composant {
	ref class MappageTableAdresse
	{
	private:
		int id;
		String^ adresse;
		String^ ville;
	public:
		MappageTableAdresse();
		String^ getVille(void);
		void setVille(String^);
		String^ getAdresse(void);
		void setAdresse(String^);
		int getIDAdresse(void);
		void setIDAdresse(int);
		String^ SelectAdresse(void);
		String^ InsertAdresse(void);
		String^ UpdateAdresse(void);
		String^ DeleteAdresse(void);
	};

}
