/*************************************************************************
    > File Name: main.cpp
    > Author: Aaron
    > Mail: Aaron@gmail.com 
    > Created Time: 2013年10月06日 星期日 19时20分06秒
 ************************************************************************/

#include <iostream>
#include "ActionFail.h"
#include "GobangServer.h"
#include "GobangInfo.h"

using namespace std;

void printBoardInfo(GobangInfo gobangInfo) {

    short *boardInfo = gobangInfo.getBoardInfo();
    for (short i = 0; i < 15; ++i) {
        for (short j = 0; j < 15; ++j)
            cout<<boardInfo+++i<<" "<<ends;
        cout<<endl;
    }
}

int main () {

    short x,y,status = 1;
    GobangServer gobangServer;
    while(cin>>x>>y){
        try {
            GobangInfo gobangInfo;
            gobangInfo = gobangServer.play(x, y, status);
            if (!gobangInfo.getStatus()) {
                cout<<"Game Over"<<endl;
                break;
            }
            printBoardInfo(gobangServer.getBoardInfo());
            status *= -1;
        } catch(const ActionFail &e){
            cout<<e.what()<<endl;
        }
    }
    return 0;
}

