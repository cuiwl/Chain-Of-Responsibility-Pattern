/**
* @file     CallDispatcher.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#ifndef chain_of_responsibility_pattern_CallDispatcher_h
#define chain_of_responsibility_pattern_CallDispatcher_h

#include <vector>
#include <algorithm>

namespace chain_of_responsibility_pattern {

template <typename CallHandler_>
class CallDispatcher 
{
	// constructor / destructor
	public:
		CallDispatcher()
		: mHandler() { }

	// register / unregister
	public:
		void addHandler(CallHandler_& handler) {
			typename std::vector<CallHandler_*>::iterator it = std::find(mHandler.begin(), mHandler.end(), &handler);
			if (it == mHandler.end()) {
				mHandler.push_back(&handler);
			}
		}

		void removeHandler(CallHandler_& handler) {
			typename std::vector<CallHandler_*>::iterator it = std::find(mHandler.begin(), mHandler.end(), &handler);
			if (it != mHandler.end()) {
				mHandler.erase(it);
			}
		}

	// call command
	public:
		template <typename Call_>
		bool handleRequest(Call_& call) {
			bool ret = false;
			for (size_t index = 0; index < mHandler.size(); index++) {
				CallHandler_* pHandler = reinterpret_cast<CallHandler_*>(mHandler[index]);
				if (pHandler->handleRequest(call)) {
					ret = true; break;
				}
			}
			return ret;
		}

	// attributes
	private:
		std::vector<CallHandler_*> mHandler;
}; // CallDispatcher

} // namespace chain_of_responsibility_pattern

#endif // chain_of_responsibility_pattern_CallDispatcher_h
