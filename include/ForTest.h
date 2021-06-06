#pragma once

class ForTest
{
public:
    ForTest() = default;
    ~ForTest() = default;

    static int add(int a, int b){
        return ( a + b );
    }


    static int sub(int a, int b){
        return ( a - b );
    }
};