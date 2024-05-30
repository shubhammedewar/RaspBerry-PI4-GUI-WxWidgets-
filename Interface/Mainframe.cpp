#include "Mainframe.h"
#include<wx/wx.h>

enum{
	panel_id,
	box1_id, box2_id, 
	button_id1, button_id2, button_id3, button_id4,
	button_id5, button_id6, button_id7, button_id8
	
};
//wxButton* button[4];

wxButton* button1;
wxButton* button2;
wxButton* button3;
wxButton* button4;
wxButton* button5;
wxButton* button6;
wxButton* button7;
wxButton* button8;

Mainframe::Mainframe(const wxString& title) :wxFrame(nullptr,wxID_ANY, "Frame") {

	CreateStatusBar();
	
	//SetBackgroundColour(*wxBLACK);
	wxPanel* panel = new wxPanel(this);

	wxStaticBox* box2 = new wxStaticBox(panel, box2_id, "", wxPoint(100, 140), wxSize(300, 100));
	box2->SetBackgroundColour(wxColor(245, 222, 179));

	wxStaticBox* box1 = new wxStaticBox(panel, box1_id, "", wxPoint(25, 20), wxSize(450, 250), wxALIGN_CENTRE);
	box1->SetBackgroundColour(wxColor(188,143,143));


	button1 = new wxButton(panel, button_id1, "SW1", wxPoint(80, 50), wxSize(50, 50));
	button2 = new wxButton(panel, button_id2, "SW2", wxPoint(170, 50), wxSize(50, 50));
	button3 = new wxButton(panel, button_id3, "SW3", wxPoint(270, 50), wxSize(50, 50));
	button4 = new wxButton(panel, button_id4, "SW4", wxPoint(360, 50), wxSize(50, 50));

	Bind(wxEVT_BUTTON, &Mainframe::buttonClicked1, this, button_id1);
	Bind(wxEVT_BUTTON, &Mainframe::buttonClicked2, this, button_id2);
	Bind(wxEVT_BUTTON, &Mainframe::buttonClicked3, this, button_id3);
	Bind(wxEVT_BUTTON, &Mainframe::buttonClicked4, this, button_id4);


	button5 = new wxButton(panel, button_id5, "1", wxPoint(130, 200), wxSize(35, 20));
	button6 = new wxButton(panel, button_id6, "2", wxPoint(200, 190), wxSize(35, 30));
	button7 = new wxButton(panel, button_id7, "3", wxPoint(270, 180), wxSize(35, 40));
	button8 = new wxButton(panel, button_id8, "4", wxPoint(340, 170), wxSize(35, 50));
	

	Bind(wxEVT_BUTTON, &Mainframe::speed1, this, button_id5);
	Bind(wxEVT_BUTTON, &Mainframe::speed2, this, button_id6);
	Bind(wxEVT_BUTTON, &Mainframe::speed3, this, button_id7);
	Bind(wxEVT_BUTTON, &Mainframe::speed4, this, button_id8);
}


void Mainframe::buttonClicked1(wxCommandEvent& evt) {
	
	static bool isButtonClicked;
	if (isButtonClicked = !isButtonClicked) {
		button1->SetBackgroundColour(*wxRED);
		wxLogStatus("Button Clicked 1");
	}
	else {
		button1->SetBackgroundColour(wxNullColour);
		wxLogStatus("Button UnClicked 1");
	}
	
}

void Mainframe::buttonClicked2(wxCommandEvent& evt) {
		
		static bool isButtonClicked;
		if (isButtonClicked = !isButtonClicked) {
			button2->SetBackgroundColour(*wxCYAN);
			
			wxLogStatus("Button Clicked 2");
		}
		else {
			button2->SetBackgroundColour(wxNullColour);


			wxLogStatus("Button UnClicked 2");
		}
}

void Mainframe::buttonClicked3(wxCommandEvent& evt) {
	static bool isButtonClicked;
	if (isButtonClicked = !isButtonClicked) {
		button3->SetBackgroundColour(*wxGREEN);

		wxLogStatus("Button Clicked 3");
	}
	else {
		button3->SetBackgroundColour(wxNullColour);

	
		wxLogStatus("Button UnClicked 3");
	}
}

void Mainframe::buttonClicked4(wxCommandEvent& evt) {
	static bool isButtonClicked;
	if (isButtonClicked = !isButtonClicked) {
		button4->SetBackgroundColour(*wxYELLOW);

		wxLogStatus("Button Clicked 4");
	}
	else {
		button4->SetBackgroundColour(wxNullColour);


		wxLogStatus("Button UnClicked 4");
	}
}

void Mainframe::speed1(wxCommandEvent& evt) {
	
	static bool isButtonClicked;
	if (isButtonClicked = !isButtonClicked) {
		button5->SetBackgroundColour(*wxRED);


		wxLogStatus("Speed 1 ON");
	}
	else {
		button5->SetBackgroundColour(wxNullColour);


		wxLogStatus("Speed 1 OFF");
	}
}

void Mainframe::speed2(wxCommandEvent& evt) {
	static bool isButtonClicked;
	if (isButtonClicked = !isButtonClicked) {
		button6->SetBackgroundColour(*wxRED);

		wxLogStatus("Speed 2 ON");
	}
	else {
		button6->SetBackgroundColour(wxNullColour);


		wxLogStatus("Speed 2 OFF");
	}
}

void Mainframe::speed3(wxCommandEvent& evt) {
	static bool isButtonClicked;
	if (isButtonClicked = !isButtonClicked) {
		button7->SetBackgroundColour(*wxRED);

		wxLogStatus("Speed 3 ON");
	}
	else {
		button7->SetBackgroundColour(wxNullColour);


		wxLogStatus("Speed 3 OFF");
	}
}

void Mainframe::speed4(wxCommandEvent& evt) {
	static bool isButtonClicked;


	if (isButtonClicked = !isButtonClicked) {
		button8->SetBackgroundColour(*wxRED);

		wxLogStatus("Speed 4 ON");
	}
	else {
		button8->SetBackgroundColour(wxNullColour);


		wxLogStatus("Speed 4 OFF");
	}
}
