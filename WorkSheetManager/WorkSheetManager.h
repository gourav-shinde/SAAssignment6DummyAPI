// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the WORKSHEETMANAGER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// WORKSHEETMANAGER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WORKSHEETMANAGER_EXPORTS
#define WORKSHEETMANAGER_API __declspec(dllexport)
#else
#define WORKSHEETMANAGER_API __declspec(dllimport)
#endif
#include<string>

/// This class manages the worksheets in workbooks
class WORKSHEETMANAGER_API CWorkSheetManager {
public:
	CWorkSheetManager(void);
	
	///Loads the worksheet in a current WorkBook
	void importWorksheet(std::string path);
	///Creates New worksheet
	void CreateWorkSheet();
	///Saves the WorkSheet
	void SaveWorksheet();
	///Deletes the Wworksheet
	void DeleteWorkSheet();
};

extern WORKSHEETMANAGER_API int nWorkSheetManager;

WORKSHEETMANAGER_API int fnWorkSheetManager(void);
