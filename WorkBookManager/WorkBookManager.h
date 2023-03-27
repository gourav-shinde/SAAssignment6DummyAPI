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

/// This class manages the WorkBook functions
class WORKBOOKMANAGER_API CWorkBookManager {
	

public:
	
	/// Holds path of workbook object
	std::string src; /*!< Holds path of this workbook */
	/// Holds and maintains all worksheet objects of current workbook
	std::map<std::string, CWorkSheetManager> list; /*!< maintains map of Worksheets in workbook */
	///Defines the types of file supported for saving workbook.
	enum FILETYPE
	{
		csv,
		xlxs,
		xlsm,
		txt
	};
	CWorkBookManager(void);
	///opens workbook.
	///@return returns -1 if workbook not found, else return workbook.
	void OpenWorkBook(std::string path /**< [in] Path of exisiting workbook. */);
	/// Saves the changes in Workbook.
	void SaveWorkBook();

/** @brief Saves the workbook in desired format.
 *
 *  @remarks csv,xlxs,xlsm,txt are supported types
 *  @param path Path of exsisiting workbook.
 *	@param type FILETYPE ENUM object
 *  @return Should not return
 */
	void SaveAs(std::string path ,FILETYPE type);
	///closes the workbook.
	///@return Should not return
	void Close();
	///Adds a Worksheet to Workbook
	///@return Should not return
	CWorkSheetManager addWorkSheet();
	///Fetches the worksheet from current set of worksheets
	///@return returns Worksheet object if fould, else null object.
	CWorkSheetManager MakeWorkSheetActive(std::string name /**< [in] key of worksheet. */);
	///deletes specified worksheet
	///@returns returns Worksheet object if found, else null object.
	void deleteWorkSheet(std::string name /**< [in] key of workbook. */);

};

extern WORKBOOKMANAGER_API int nWorkBookManager;

WORKBOOKMANAGER_API int fnWorkBookManager(void);
