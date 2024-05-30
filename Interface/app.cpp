#include "app.h"
#include "Mainframe.h"
#include<wx/wx.h>

wxIMPLEMENT_APP(app);

bool app::OnInit() {
	Mainframe* mainframe = new Mainframe("Interface");
	mainframe->SetClientSize(500, 300);
	mainframe->Show();
	return true;
}