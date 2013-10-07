/*************************************************************************
    > File Name: GobangInfo.cpp
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月07日 星期一 19时30分19秒
 ************************************************************************/

#include <iostream>
#include "GobangInfo.h"

using namespace std;

bool GobangInfo::getStatus() {

    return this->status;
}

void GobangInfo::setStatus(bool status) {

    this->status = status;
}

short* GobangInfo::getBoardInfo() {

    return this->boardInfo;
}

void GobangInfo::setBoardInfo(short x, short y, short status) {

    this->boardInfo[x][y] = status;
}
