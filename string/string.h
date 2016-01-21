#ifndef _STRING_H_
#define _STRING_H_

#include <cstring>

class String {
	private:
		char *str;

	public:
		String();

		String(const char *str);

		char* getString() const;

		void setString(const char* str);

		String operator +(String s) const;

		void operator +=(String s);
};

#endif // _STRING_H_
