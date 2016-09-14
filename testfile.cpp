/*
 * testfile.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: MAS2HC
 */

#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include "findingfile.h"

using namespace std;

int main() {
	cout << "Just testing build program \n" << endl;
	std::string file;
	file = get_all_files_name_in_folder();
	//file = "just for testing";
	cout << "Print file for test: " << file << endl;
	return 0;
}
