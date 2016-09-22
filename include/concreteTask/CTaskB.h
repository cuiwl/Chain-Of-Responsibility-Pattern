/**
* @file     CTaskB.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#include "../ITask.h"

#ifndef chain_of_responsibility_pattern_task_CTaskB_h
#define chain_of_responsibility_pattern_task_CTaskB_h

namespace chain_of_responsibility_pattern {
namespace task {

class CTaskB
: public ITask
{
	public:
		virtual ~CTaskB() {}

	// derived from ITask
	public:
		// if current task can proceed this request, return true, 
		// otherwise, return false so that the next Task can take it.
		virtual bool handleRequest(int value)
		{
			printf("CTaskB: handleRequest value is %d\n", value);
			return false;
		}
};

} // namespace task
} // namespace chain_of_responsibility_pattern

#endif // chain_of_responsibility_pattern_task_CTaskB_h