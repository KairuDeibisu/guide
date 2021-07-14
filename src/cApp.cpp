#include "cApp.h"

wxIMPLEMENT_APP(cApp);

// Implements cApp& wxGetApp()
wxDECLARE_APP(cApp);

bool cApp::OnInit()
{
    m_frame = new cMain("Guide");
    m_frame->Show();

    SetTopWindow(m_frame);

    return true;
}
