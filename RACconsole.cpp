// CARconsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "functions.h"


int main()
{
	functions f;
	pathvec fileList;
	std::string path;
	std::string nameFormat;

	nameFormat = f.enter_name();
	path = f.choose_directory();
	fileList = f.read_directory(path);
	f.rename_directory_files(fileList, nameFormat, path);

    return 0;
}
		

