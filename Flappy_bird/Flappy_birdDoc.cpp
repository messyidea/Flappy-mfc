// Flappy_birdDoc.cpp : implementation of the CFlappy_birdDoc class
//

#include "stdafx.h"
#include "Flappy_bird.h"

#include "Flappy_birdDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFlappy_birdDoc

IMPLEMENT_DYNCREATE(CFlappy_birdDoc, CDocument)

BEGIN_MESSAGE_MAP(CFlappy_birdDoc, CDocument)
END_MESSAGE_MAP()


// CFlappy_birdDoc construction/destruction

CFlappy_birdDoc::CFlappy_birdDoc()
{
	// TODO: add one-time construction code here

}

CFlappy_birdDoc::~CFlappy_birdDoc()
{
}

BOOL CFlappy_birdDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document) 

	return TRUE;
}




// CFlappy_birdDoc serialization

void CFlappy_birdDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CFlappy_birdDoc diagnostics

#ifdef _DEBUG
void CFlappy_birdDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFlappy_birdDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFlappy_birdDoc commands
