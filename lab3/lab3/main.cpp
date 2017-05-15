//
//  main.cpp
//  lab3
//
//  Created by apple on 2017/5/15.
//  Copyright © 2017年 applecyj. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
#include <stdio.h>

int function(int a,int b,int c){
    char buffer[14];
    int sum;
    int *ret;
    
    ret = (int*) (buffer +20);
    (*ret)+=8;
    sum = a+b+c;
    return sum;
}

int main(){
    int x;
    x=0;
    function(1,2,3);
    x=1;
    printf("%d\n",x);
    return 0;
}
