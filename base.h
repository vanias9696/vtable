#ifndef _BASE_H_
#define _BASE_H_

#include <string>

namespace basecamp {
    
class Base {
public:
//    virtual 
	Base();
    int eval(int a, int b);
    int eval1(int a, int b);

    
//    virtual 
    void printMsg(const std::string& msg);
    void printMsg1(const std::string& msg);
protected:
	void **vptr;
};

}

#endif
