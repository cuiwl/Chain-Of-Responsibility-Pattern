/**
* @file     CTaskA.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#include "../ITask.h"

#ifndef chain_of_responsibility_pattern_task_CTaskA_h
#define chain_of_responsibility_pattern_task_CTaskA_h

namespace chain_of_responsibility_pattern {
namespace task {

class CTaskA
: public ITask
{
	public:
		virtual ~CTaskA() { }

	// derived from ITask
	public:
		// if current task can proceed this request, return true, 
		// otherwise, return false so that the next Task can take it.
		virtual bool handleRequest(int value)
		{
			printf("CTaskA: handleRequest value is 0x%X\n", value);
			return true;
		}
};

} // namespace task
} // namespace chain_of_responsibility_pattern

#endif // chain_of_responsibility_pattern_task_CTaskA_h