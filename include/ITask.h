/**
* @file     ITask.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#ifndef chain_of_responsibility_pattern_ITask_h
#define chain_of_responsibility_pattern_ITask_h

namespace chain_of_responsibility_pattern {

class ITask
{
	//  destructor
	public:
		virtual ~ITask() { }

	// command
	public:
		virtual bool handleRequest(int value) = 0;

};	// ITask

} // namespace chain_of_responsibility_pattern

#endif // chain_of_responsibility_pattern_ITask_h