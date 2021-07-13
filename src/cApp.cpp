#include "cApp.h"

wxIMPLEMENT_APP(cApp);

// Implements cApp& wxGetApp()
wxDECLARE_APP(cApp);

cApp::cApp()
{
}

cApp::~cApp()
{
}

bool cApp::OnInit()
{
	m_frame = new cMain("Guide");
	m_frame->Show();
	return true;
}
