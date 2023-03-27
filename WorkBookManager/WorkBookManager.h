// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the WORKBOOKMANAGER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// WORKBOOKMANAGER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WORKBOOKMANAGER_EXPORTS
#define WORKBOOKMANAGER_API __declspec(dllexport)
#else
#define WORKBOOKMANAGER_API __declspec(dllimport)
#endif
#include<string>
#include<map>
#include "../WorkSheetManager/WorkSheetManager.h"

/// This class is manages the WorkBook funtions
class WORKBOOKMANAGER_API CWorkBookManager {
	std::string src; /// path of this workbook
	std::map<std::string, CWorkSheetManager> list;///maintains map of Worksheets in workbook
public:
	enum FILETYPE
	{
		csv,
		xlxs,
		xlsm,
		txt
	};/// defines the types of file supported for saving
	CWorkBookManager(void);
	///This function is used to open workbook.
	void OpenWorkBook(std::string path);
	///This function is used to Save the changes in Workbook.
	void SaveWorkBook();
	///This function is used to Save the workbook in desired format.
	void SaveAs(std::string path,FILETYPE type);
	///This function is used to close workbook.
	void Close();
	///Adds a Worksheet to Workbook
	void addWorkSheet();
	///Fetches the worksheet from current set of worksheets
	void MakeWorkSheetActive(std::string name);
	///deletes specified worksheet
	void deleteWorkSheet(std::string name);

};

extern WORKBOOKMANAGER_API int nWorkBookManager;

WORKBOOKMANAGER_API int fnWorkBookManager(void);
