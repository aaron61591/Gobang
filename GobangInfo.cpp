/*************************************************************************
    > File Name: GobangInfo.cpp
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月07日 星期一 19时30分19秒
 ************************************************************************/

#include <iostream>
#include "GobangInfo.h"

using namespace std;

GobangInfo::GobangInfo() {

    memset(this->boardInfo, 0, sizeof (this->boardInfo));
    this->status = true;
}

bool GobangInfo::getStatus() {

    return this->status;
}

void GobangInfo::setStatus(bool status) {

    this->status = status;
}

short* GobangInfo::getBoardInfo() {
/*
    short (*p)[15] = this->boardInfo;
    short *p2 = p[0];
    return p2;
*/
    return this->boardInfo[0];
}

void GobangInfo::setBoardInfo(short x, short y, short status) {

    this->boardInfo[x][y] = status;
}
