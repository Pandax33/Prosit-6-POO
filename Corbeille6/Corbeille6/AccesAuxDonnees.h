#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace Composant {


	ref class AccesAuxDonnees
	{
	private:
		String^ connexion;
		String^ requete;
		SqlConnection^ connecteur;
		SqlCommand^ commande;
		SqlDataAdapter^ adapteur;
		DataSet^ DS;
		void setSQL(String^);
	public:
		AccesAuxDonnees();
		int actionRowID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);


	};
}
