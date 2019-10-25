//
//  Hello.cpp
//  practice
//
//  Created by 孙慧 on 19/10/25.
//  Copyright © 2019年 孙慧. All rights reserved.
//

#include <iostream>
#include "Hello.hpp"

using namespace std;

Hello::Hello()
{
    this->name = "Tom";
}

Hello::Hello(std::string name)
{
    this->name = name;
}

void Hello::hello()
{
    cout << "Hello, " << this->name;
}
