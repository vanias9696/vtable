#include "base.h"

#include <iostream>

using basecamp::Base;

using Ev = int(*)(int, int);
using prM = void (*)(const std::string&);

static void *vtable[] = {reinterpret_cast<void *>(&Base::eval1), reinterpret_cast<void *>(&Base::printMsg1)};

Base::Base()
{
	vptr = vtable;
}



int Base::eval(int a, int b)
{
	Ev f = (Ev) vptr[0];
	return f(a,b);
}

void Base::printMsg(const std::string& msg)
{
	prM f = (prM) vptr[1];
	f(msg);
}

int Base::eval1(int a, int b) {
    return (a + b);
}

void Base::printMsg1(const std::string& msg) {
    std::cout << "[Base]: " << msg << std::endl;
}
