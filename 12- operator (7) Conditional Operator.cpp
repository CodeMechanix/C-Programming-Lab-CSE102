/*
Conditional Operator:
(exp1) ? true : false
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    a = 5;
    b = 10;
    //(a<b) ? printf("%d",a) : printf("%d",b);
    int c = (a<b) ? a : b;
    printf("%d\n",c);
    return 0;
}


