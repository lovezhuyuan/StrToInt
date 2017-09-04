//
//  main.cpp
//  testc++
//
//  Created by xdlc on 2017/9/4.
//  Copyright © 2017年 xdlc. All rights reserved.
//

#include <iostream>
int StrToInt(char* string){
    int number=0;
    while (*string != 0) {
        auto a = *string;
        auto b = *string-'0';
        number=number*10+*string-'0';
        ++string;
    }
    return number;
}
int main(int argc, const char * argv[]) {
    int a = StrToInt("205312423");
    return 0;
}
