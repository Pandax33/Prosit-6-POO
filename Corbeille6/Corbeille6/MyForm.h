#pragma once
#include "gestion.h"
namespace Corbeille6 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Description r�sum�e de FRM_Principal
	/// </summary>
	public ref class FRM_Principal : public System::Windows::Forms::Form
	{
	public:
		FRM_Principal(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~FRM_Principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::TextBox^ txt_idPersonne;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_sup;
	private: System::Windows::Forms::Button^ btn_enregistrer;
	private: service::gestion^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::TextBox^ adresse;
	private: System::Windows::Forms::TextBox^ ville;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->txt_idPersonne = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_sup = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
			this->adresse = (gcnew System::Windows::Forms::TextBox());
			this->ville = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(9, 9);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(66, 13);
			this->lbl_id->TabIndex = 0;
			this->lbl_id->Text = L"ID Personne";
			// 
			// txt_idPersonne
			// 
			this->txt_idPersonne->Location = System::Drawing::Point(12, 25);
			this->txt_idPersonne->Name = L"txt_idPersonne";
			this->txt_idPersonne->ReadOnly = true;
			this->txt_idPersonne->Size = System::Drawing::Size(202, 20);
			this->txt_idPersonne->TabIndex = 1;
			this->txt_idPersonne->TextChanged += gcnew System::EventHandler(this, &FRM_Principal::txt_idPersonne_TextChanged);
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(9, 51);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(29, 13);
			this->lbl_nom->TabIndex = 2;
			this->lbl_nom->Text = L"Nom";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(12, 67);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(202, 20);
			this->txt_nom->TabIndex = 3;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &FRM_Principal::txt_nom_TextChanged);
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->Location = System::Drawing::Point(9, 93);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(43, 13);
			this->lbl_prenom->TabIndex = 4;
			this->lbl_prenom->Text = L"Pr�nom";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(12, 109);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(202, 20);
			this->txt_prenom->TabIndex = 5;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &FRM_Principal::txt_prenom_TextChanged);
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(9, 270);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(50, 13);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(12, 295);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(412, 50);
			this->txt_message->TabIndex = 7;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(12, 234);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(46, 23);
			this->btn_first->TabIndex = 8;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_first_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(64, 234);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(46, 23);
			this->btn_previous->TabIndex = 9;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_previous_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(116, 234);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(46, 23);
			this->btn_next->TabIndex = 10;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_next_Click);
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(168, 234);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(46, 23);
			this->btn_end->TabIndex = 11;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_end_Click);
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Location = System::Drawing::Point(238, 25);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(80, 36);
			this->btn_nouveau->TabIndex = 12;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(238, 79);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(80, 36);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_modifier_Click);
			// 
			// btn_sup
			// 
			this->btn_sup->Location = System::Drawing::Point(238, 133);
			this->btn_sup->Name = L"btn_sup";
			this->btn_sup->Size = System::Drawing::Size(80, 36);
			this->btn_sup->TabIndex = 14;
			this->btn_sup->Text = L"Supprimer";
			this->btn_sup->UseVisualStyleBackColor = true;
			this->btn_sup->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_sup_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->Location = System::Drawing::Point(326, 25);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(98, 144);
			this->btn_enregistrer->TabIndex = 15;
			this->btn_enregistrer->Text = L"ENREGISTRER";
			this->btn_enregistrer->UseVisualStyleBackColor = true;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &FRM_Principal::btn_enregistrer_Click);
			// 
			// adresse
			// 
			this->adresse->Location = System::Drawing::Point(12, 149);
			this->adresse->Name = L"adresse";
			this->adresse->Size = System::Drawing::Size(202, 20);
			this->adresse->TabIndex = 16;
			// 
			// ville
			// 
			this->ville->Location = System::Drawing::Point(12, 193);
			this->ville->Name = L"ville";
			this->ville->Size = System::Drawing::Size(202, 20);
			this->ville->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Adresse";
			this->label1->Click += gcnew System::EventHandler(this, &FRM_Principal::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Ville";
			// 
			// FRM_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 391);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ville);
			this->Controls->Add(this->adresse);
			this->Controls->Add(this->btn_enregistrer);
			this->Controls->Add(this->btn_sup);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_nouveau);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_message);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->txt_idPersonne);
			this->Controls->Add(this->lbl_id);
			this->Name = L"FRM_Principal";
			this->Text = L"A2 POO Corbeille 6";
			this->Load += gcnew System::EventHandler(this, &FRM_Principal::FRM_Principal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->index = 0;
	this->mode = "RIEN";
	this->ds = gcnew Data::DataSet();
	this->ds2 = gcnew Data::DataSet();
	this->processusPersonnes = gcnew service::gestion();
	this->loadData(this->index);
	this->txt_message->Text = "Data charg�es";
}
private: void loadData(int index)
{
	this->ds->Clear();
	this->ds = this->processusPersonnes->listePersonnes("liste");
	this->txt_idPersonne->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	this->ds2->Clear();
	this->ds2 = this->processusPersonnes->listeAdresse("liste2");
	this->adresse->Text = Convert::ToString(this->ds2->Tables["liste2"]->Rows[this->index]->ItemArray[1]);
	this->ville->Text = Convert::ToString(this->ds2->Tables["liste2"]->Rows[this->index]->ItemArray[2]);

}	
private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->index = 0;
	this->loadData(this->index);
	this->txt_message->Text = "Enregistrement n� : " + (this->index + 1);
}
private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->index > 0)
	{
		this->index--;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n� : " + (this->index + 1);
	}
}
private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->index < this->ds->Tables["liste"]->Rows->Count - 1)
	{
		this->index++;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n� : " + (this->index + 1);
	}
}
private: System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->index = this->ds->Tables["liste"]->Rows->Count - 1;
	this->loadData(this->index);
	this->txt_message->Text = "Enregistrement n� : " + (this->index + 1);
}
private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->txt_idPersonne->Clear();
	this->txt_nom->Clear();
	this->txt_prenom->Clear();
	this->mode = "nouv";
	this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
}
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->mode = "maj";
	this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
}
private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->mode = "sup";
	this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
}
private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->processusPersonnes->ajouter(this->txt_nom->Text, this->txt_prenom->Text);
		this->processusPersonnes->ajouterAdresse(this->adresse->Text, this->ville->Text);
		this->txt_message->Text = "L'ID g�n�r� est le : " + Id + ". ";
	}
	else if (this->mode == "maj")
	{
		this->processusPersonnes->modifier(Convert::ToInt32(this->txt_idPersonne->Text), this->txt_nom -> Text, this->txt_prenom->Text,this->adresse->Text,this->ville->Text);
	}
	else if (this->mode == "sup")
	{
		this->processusPersonnes->supprimer(Convert::ToInt32(this->txt_idPersonne->Text));
	}
	this->index = 0;
	this->loadData(this->index);
	this->txt_message->Text += "Traitement termin�.";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_idPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
