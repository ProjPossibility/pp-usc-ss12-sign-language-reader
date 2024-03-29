#ifndef __FOLDERREADER__
#define __FOLDERREADER__

#include "Prerequs.h"

/**
 * Folder Reader class
 */
class FolderReader : public InputReader {

	// Root directory
	string Directory;
	DIR *RootDir;

	vector<string> ClassDirs;

	// Per Class
	    // Index in the Class Dirs
		int curClass;
		DIR *ClassDir;

public:
	FolderReader(string);
	/**
	 * Read all the directories in
	 */
	void ReadDirectories();
	/**
	 * Go to Next Class
	 */
	bool nextClass();
	/**
	 * next image from the list
	 */
	IplImage* next(int&);
	//
	void reset();
	//
	void end();
	/**
	 * Returns Number Of Images
	 */
	int numberofimages();
	int k(){return ClassDirs.size();}
	~FolderReader(){};
};

#endif
