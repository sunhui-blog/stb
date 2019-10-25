//
//  test.cpp
//  practice
//
//  Created by 孙慧 on 19/10/25.
//  Copyright © 2019年 孙慧. All rights reserved.
//

#include <iostream>
#include "Hello.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!\n";
    Hello h("Jerry\n");
    h.hello();
    return 1;
}
