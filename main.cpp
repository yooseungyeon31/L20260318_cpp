#include <iostream>
#include "State.h"


using namespace std;

int main()
{
	UState MyState;
	cout << &MyState << endl;

	return 0;
}

//클래스 만들기 구조 연습하기
//----------------------------------

//-----------------------------------------

//class State
//{
//public:
//	int ID;
//	string StateName;
//};
//
//class Transition
//{
//
//public:
//	int NowState;
//	string Condition;
//	int NextState;
//};

////무조건 만들어라..생성자와 소멸자를 클래스 만들 떄는 있어야한다. 
//class A
//{
//public:
//	A();
//	~A();
//};
//
//A::A()
//{
//
//}
//A::~A()
//{
//
//}
//
//
//
////FSM이 State, Transition을 가지고 있다.
////자연어로 말이 되야 한다.
//
//class FSM //상태머신
//{
//public:
//	FSM() //일단 만들어라 무조건
//	{
//
//	}
//
//	State States[4];
//	Transition Transitions[5];
//
//};
//




//-----------------사과를 연상하며-------------
////Memory
//class Apple
//{
//public:
//	int Color = 1; //0: 노란색, 1: 빨간색
//	int Shape = 3;//0:네모, 1: 세모, 3: 동그라미
//	int 꼭지 = 1; //갯수 한 개
//	bool InTree = true;
//	int Delicious = 2;
//
//
//
//
//	void EatBy(int who);
//	void GrowUp();
//	void Fall();
//
//
//};
//
//void Apple::EatBy(int who)
//{
//}
//
//void Apple::GrowUp()
//{
//
//}
//
//void Apple::Fall()
//{
//}
//-------------------------------------
