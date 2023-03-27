/// Session.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Session.h"


/// This is an example of an exported variable
SESSION_API int nSession=0;

/// @remarks
///     This is an example of an exported function!\n
///     \n
///     Returns zero.
SESSION_API int fnSession(void)
{
    return 0;
}

/// This is the constructor of a class that has been exported.
CSession::CSession()
{
    return;
}

///creates a new session
void CSession::CreateSession() {

}

///Load Session configurations and Workbooks
/*! Returns -1 if session file not found at specified path*/
void CSession::LoadSession(std::string path) {

}

///Save the Session
void CSession::Save() {

}

///Save Session at specified path
void CSession::SaveAt(std::string path) {

}

///Creates New workbook and adds into the session
CWorkBookManager CSession::CreateWorkBook() {

}


/*! Returns -1 if file not found at specified path, else returns file*/
CWorkBookManager CSession::AddWorkBook(std::string path) {

}

///removes workbook from the session
/*! This does not delete the workbook.*/
void CSession::RemoveWorkbook(std::string path) {

}


