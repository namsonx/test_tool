/*
 * read_xls_data.cpp
 *
 *  Created on: Sep 15, 2016
 *      Author: MAS2HC
 */

#include <iostream>
#include <string>
#include "libxl.h"
#include "read_xls_data.h"

using namespace libxl;

std::string read_data(std::string excel_file){
	std::string test_data;
	Book* book = xlCreateBook();
	if(book->load(L"input.xls"))
	{

	}
	return test_data;
}




