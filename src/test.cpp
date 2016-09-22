/**
* @file     test.h
* @author   cuiwl<cwllinux@126.com>
*
*/

/**
	version history:

	2016-09-22        0.1.0       cuiwl        initial implementation
**/


#include "../include/CallDispatcherImpl.h"
#include "../include/concreteTask/CTaskA.h"
#include "../include/concreteTask/CTaskB.h"


int main(int argc, char** argv)
{
	chain_of_responsibility_pattern::CallDispatcherImpl dispatcher;
	
	chain_of_responsibility_pattern::task::CTaskA a1;
	chain_of_responsibility_pattern::task::CTaskB b2;

	dispatcher.addHandler(a1);
	dispatcher.addHandler(b2);

	int argument = 34;
	dispatcher.handleRequest(argument);

	dispatcher.removeHandler(b2);
	dispatcher.removeHandler(a1);
	return 0;
}