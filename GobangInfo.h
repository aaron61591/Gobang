/*************************************************************************
    > File Name: GobangInfo.h
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月07日 星期一 19时31分08秒
 ************************************************************************/
#ifndef GOBANGINFO_H
#define GOBANGINFO_H

#include <iostream>
#include <string.h>

using namespace std;

class GobangInfo {

    private:
        bool status;
        short boardInfo[15][15];
    public:
        GobangInfo();
        bool getStatus();
        void setStatus(bool);
        short* getBoardInfo();
        void setBoardInfo(short, short, short);
};

#endif /* GOBANGINFO_H */
