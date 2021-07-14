#pragma once

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class cMain final : public wxFrame
{
public:
	explicit cMain(const wxString &title);
	~cMain() override;

	void OnAbout(wxCommandEvent &event);
	void OnQuit(wxCommandEvent &event);

private:
	void createMenuBar();
	wxDECLARE_EVENT_TABLE();
};
