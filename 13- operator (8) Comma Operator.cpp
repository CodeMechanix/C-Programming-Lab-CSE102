/*
Comma Operator:
(  ,  ,  , )
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cma;
    cma = (a=5 , b = 10 , a+b);
    //cma = (a=5 , b = 10 , a=5); // output -> 5
    printf("%d\n",cma);
    return 0;
}
