/*************************************************************************
    > File Name: ActionFail.h
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月06日 星期日 19时42分08秒
 ************************************************************************/
#ifndef ACTIONFAIL_H
#define ACTIONFAIL_H

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class ActionFail : public runtime_error {

    public:
        ActionFail(string msg):runtime_error(msg){}
};

#endif /* ACTIONFAIL_H */
