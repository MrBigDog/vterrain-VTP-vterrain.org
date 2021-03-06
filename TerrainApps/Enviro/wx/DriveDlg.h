//
// Name:		DriveDlg.h
//
// Copyright (c) 2011 Virtual Terrain Project
// Free for all uses, see license.txt for details.
//

#ifndef __DriveDlg__
#define __DriveDlg__

/**
@file
Subclass of DriveDlgBase, which is generated by wxFormBuilder.
*/

#include "EnviroUI.h"
#include "vtlib/core/CarEngine.h"

//// end generated include

/** Implementing DriveDlgBase */
class DriveDlg : public DriveDlgBase
{
protected:
	// Handlers for DriveDlgBase events.
	void OnLeftDown( wxMouseEvent& event );
	void OnLeftUp( wxMouseEvent& event );
	void OnMotion( wxMouseEvent& event );
	void OnLeftDClick( wxMouseEvent& event );
	void OnAreaPaint( wxPaintEvent& event );
	void OnFollow( wxCommandEvent& event );
	void OnScroll( wxScrollEvent& event );

public:
	/** Constructor */
	DriveDlg( wxWindow* parent );
//// end generated class members

	void SetCarEngine(CarEngine *eng) { m_Engine = eng; }
	CarEngine *GetCarEngine() { return m_Engine.get(); }

protected:
	void MouseToMotion(int mx, int my);

	float m_fSpeed;
	float m_fTurn;
	bool m_bFollow;

	CarEnginePtr m_Engine;
	bool m_bMouseDown;
};

#endif // __DriveDlg__
