//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TUniversity.h
//  @ Date : 12.03.2018
//  @ Author :
//
//

#include "TStudent.h"
#if !defined(_TUNIVERSITY_H)
#define _TUNIVERSITY_H


class TUniversity {
public:
	void attach(TStudent*);
	void detach();
	void printData(int i);
	void satData(int i, string name, int age);
private:
	vector<TStudent*> students;
};

#endif  //_TUNIVERSITY_H