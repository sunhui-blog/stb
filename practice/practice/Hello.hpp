//
//  Hello.hpp
//  practice
//
//  Created by 孙慧 on 19/10/25.
//  Copyright © 2019年 孙慧. All rights reserved.
//

#ifndef Hello_hpp
#define Hello_hpp

using namespace std;

class Hello
{
private:
    std::string name;
public:
    Hello();
    Hello(std::string name);
    void hello();
};

#endif
