#pragma once
//#include "State.h"
//#include "Transition.h" //실제로는 이렇게 사용하지 않고 
//아래 처럼 사용한다.--

class UState;
class UTransition;
//------

class UFSM
{
public:
	UFSM();
	~UFSM();

	UState* States;//동적으로 저장하려면? 포인터! 
	UTransition* Transitions; 
	
};

