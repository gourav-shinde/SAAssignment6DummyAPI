// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SESSION_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SESSION_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


#ifdef SESSION_EXPORTS
#define SESSION_API __declspec(dllexport)
#else
#define SESSION_API __declspec(dllimport)
#endif
#include <string>
#include <map>
#include "../WorkBookManager/WorkBookManager.h"


/// This class manages Session functions and workbooks
class SESSION_API CSession {
	std::string current_session_path;
	std::map<std::string, CWorkBookManager> list;
public:
	CSession(void);
	///creates a new session
	 void CreateSession();
	///Loads Session configurations and Workbooks
	 void LoadSession(std::string path);
	 ///Saves the Session
	 void Save();
	 ///Saves Session at specified path
	 void SaveAt(std::string path);
	 ///Creates New workbook and adds into the session
	 void CreateWorkBook();
	 //Adds exsiting workbook to the session, returns -1 if file does not exist
	 void AddWorkBook(std::string path);
	 ///removes workbook from the session
	 void RemoveWorkbook(std::string);
};

extern SESSION_API int nSession;

SESSION_API int fnSession(void);
