/*
Logical Operator :
&&
||
!
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int math,cse,ck;
    math=5;
    cse = 10;
    //ck = (math==5) && (cse==10);
    //printf("%d",ck); // 1

    ck = !(math==5);
    printf("%d",ck); // 0

    return 0;
}
