/// WorkBookManager.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "WorkBookManager.h"


/// This is an example of an exported variable
WORKBOOKMANAGER_API int nWorkBookManager=0;

/// This is an example of an exported function.
WORKBOOKMANAGER_API int fnWorkBookManager(void)
{
    return 0;
}

/// This is the constructor of a class that has been exported.
CWorkBookManager::CWorkBookManager()
{
    return;
}

///This function is used to open workbook
void CWorkBookManager::OpenWorkBook(std::string path) {

}

///This function is used to Save the changes in Workbook.
void CWorkBookManager::SaveWorkBook() {

}

///This function is used to Save the workbook in desired format.
void CWorkBookManager::SaveAs(std::string path,FILETYPE type) {

}

///This function is used to close workbook.
void CWorkBookManager::Close() {

}

///Adds a Worksheet to Workbook
void CWorkBookManager::addWorkSheet() {

}

///Fetches the worksheet from current set of worksheets
void CWorkBookManager::MakeWorkSheetActive(std::string name) {

}

///deletes specified worksheet
void CWorkBookManager::deleteWorkSheet(std::string name) {

}

