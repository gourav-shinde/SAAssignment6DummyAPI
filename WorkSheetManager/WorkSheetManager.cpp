/// WorkSheetManager.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "WorkSheetManager.h"


/// This is an example of an exported variable
WORKSHEETMANAGER_API int nWorkSheetManager=0;

/// This is an example of an exported function.
WORKSHEETMANAGER_API int fnWorkSheetManager(void)
{
    return 0;
}

///This is the constructor of a WorkSheetManger.
CWorkSheetManager::CWorkSheetManager()
{
    return;
}

///Loads the worksheet in a current WorkBook
/*! Loads a exsisting worksheet in active workbook*/
void CWorkSheetManager::importWorksheet(std::string path)
{
}

///Creates New worksheet
/*! Creates new worksheet in active workbook.*/
void CWorkSheetManager::CreateWorkSheet()
{
}

///Saves the WorkSheet
/*! Saves the worksheet in workbook*/
void CWorkSheetManager::SaveWorksheet()
{
}

///Deletes the Wworksheet
void CWorkSheetManager::DeleteWorkSheet()
{
}
