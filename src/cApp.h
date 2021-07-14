#pragma once

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "cMain.h"

class cApp : public wxApp
{
public:
	cApp() = default;
	~cApp() override = default;

private:
	cMain *m_frame = nullptr;

public:
    bool OnInit() override;
};
