/*
 * CFileWL.cpp
 *
 *  Created on: Jan 10, 2014
 *      Author: cl
 */
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>

#ifndef CFILEWL_H_xxxxxxxxx
#define CFILEWL_H_xxxxxxxxx 1

class CFileWL {
public:
	CFileWL();
	virtual ~CFileWL();

	void WriteStringToFile(std::string  strContent);
};

#endif /* CFILEWL_H_ */



CFileWL::CFileWL() {
	// TODO Auto-generated constructor stub

}

CFileWL::~CFileWL() {
	// TODO Auto-generated destructor stub
}

void CFileWL::WriteStringToFile(std::string  strContent)
{
	char *filepath = "./test.txt";
	mode_t f_attrib = S_IRUSR | S_IWUSR | S_IRGRP;
	int f = open(filepath, O_RDWR | O_CREAT, f_attrib);

	if(-1 == f)
	{
		std::cout<<"create file failure"<<std::endl;
	}
	else
	{
		std::cout<<"create file success"<<std::endl;
		close(f);
	}

}
