#pragma once

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#    include <wx/wx.h>
#endif

#include "wx/listctrl.h"

class cMain final : public wxFrame {
public:
    explicit cMain(const wxString& title);
    ~cMain() override;

    void OnAbout(wxCommandEvent& event);
    void OnQuit(wxCommandEvent& event);

private:
    wxDECLARE_EVENT_TABLE();
    void createMenuBar();

private:
};
