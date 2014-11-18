//
//  PopData.h
//  SimpleGame
//
//  Created by takashi-fukui on 2014/10/26.
//
//

#ifndef __SimpleGame__PopData__
#define __SimpleGame__PopData__

#include <cocos2d.h>
#include "Enemy.h"

class PopData
{
private:
    int popMax;
    std::vector<int> vecPopTime;
    std::vector<int> vecPopType;
    std::vector<bool> vecPopFlag;

public:
    PopData();
    int getPopMax();
    int getPopTime( int num );
    int getPopType( int num );
    bool getPopFlag( int num );
    void setPopFlagTrue( int num );
};

#endif /* defined(__SimpleGame__PopData__) */
