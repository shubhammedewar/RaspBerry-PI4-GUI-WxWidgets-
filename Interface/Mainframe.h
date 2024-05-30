#pragma once
#include<wx/wx.h>

class Mainframe:public wxFrame
{
public:
	Mainframe(const wxString& title);
	
private:
	void buttonClicked1(wxCommandEvent& evt);
	void buttonClicked2(wxCommandEvent& evt);
	void buttonClicked3(wxCommandEvent& evt);
	void buttonClicked4(wxCommandEvent& evt);

	void speed1(wxCommandEvent& evt);
	void speed2(wxCommandEvent& evt);
	void speed3(wxCommandEvent& evt);
	void speed4(wxCommandEvent& evt);

};

