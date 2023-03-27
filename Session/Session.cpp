/// Session.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Session.h"


/// This is an example of an exported variable
SESSION_API int nSession=0;

/// This is an example of an exported function.
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
void CSession::LoadSession(std::string path) {

}

///Save the Session
void CSession::Save() {

}

///Save Session at specified path
void CSession::SaveAt(std::string path) {

}

///Creates New workbook and adds into the session
void CSession::CreateWorkBook() {

}

///Adds exsiting workbook to the session, returns -1 if file does not exist
void CSession::AddWorkBook(std::string path) {

}

///removes workbook from the session
void CSession::RemoveWorkbook(std::string path) {

}


