#pragma once
#include <string>

class UState
{
public:
	UState(); //일단 생성자 소멸자 부터 적는다. 
	~UState();

	int ID;
	std::string StateName;
};

