#pragma once

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class cMain : public wxFrame
{
public:
	cMain(const wxString &title);
	~cMain();

	void OnAbout(wxCommandEvent &event);
	void OnQuit(wxCommandEvent &event);

private:
	void createMenuBar();
};
