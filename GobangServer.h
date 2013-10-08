/*************************************************************************
    > File Name: GobangServer.h
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月07日 星期一 20时08分39秒
 ************************************************************************/
#ifndef GOBANGSERVER_H
#define GOBANGSERVER_H

#include <iostream>
#include "GobangInfo.h"

using namespace std;

class GobangServer {

    private:
        GobangInfo gobangInfo;
    public:
        GobangInfo play(short, short, short);
        GobangInfo getBoardInfo();
};

#endif /* GOBANGSERVER_H */
