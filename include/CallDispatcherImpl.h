/**
* @file     CallDispatcherImpl.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#ifndef chain_of_responsibility_pattern_CallDispatcherImpl_h
#define chain_of_responsibility_pattern_CallDispatcherImpl_h

#include "CallDispatcher.h"
#include "ITask.h"

namespace chain_of_responsibility_pattern {

class CallDispatcherImpl
: public CallDispatcher<ITask>
{
	public:
		CallDispatcherImpl() { }
		~CallDispatcherImpl() { }

}; // CallDispatcherImpl

} // namespace chain_of_responsibility_pattern

#endif // chain_of_responsibility_pattern_CallDispatcherImpl_h