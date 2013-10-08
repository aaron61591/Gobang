/*************************************************************************
    > File Name: GobangServer.cpp
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月07日 星期一 20时08分59秒
 ************************************************************************/

#include <iostream>
#include "GobangServer.h"
#include "GobangInfo.h"

using namespace std;

GobangInfo GobangServer::play(short x, short y, short status) {

    this->gobangInfo.setBoardInfo(x, y, status);
    return this->gobangInfo;
}

GobangInfo GobangServer::getBoardInfo() {

    return gobangInfo;
}
