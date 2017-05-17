













Structure Programming (Part-01)






























 
 
 Topics Of Structure Programming-01




I.	Input Output
II.	Operator
III.	Math.h
IV.	Conditional logic
V.	Switch
VI.	Conditional Operator
VII.	Loop
VIII.	Series


Every Chapter Have Following Three Parts
------------------------------------------------------
1.	Problems.
2.	Solves.
3.	Home Works.












1
 





 Welcome To Programming World
Input Output
1.	Write a program that print a massage.
#include<stdio.h> int main ()
{

printf("University Of Asia Pacific\n"); return 0;
}

2.	An integer variable n contains 5. Write a program that print the value of n.
#include<stdio.h> int main ()
{

int n; n=5;
printf("The value of n is = %d", n); return 0;
}

2
 
3.	Write a program that read and display an integer
number.
#include<stdio.h> int main ()
{

int n;
printf("Enter N = "); scanf("%d", &n);
printf("The integer number is : %d", n); return 0;
}

4.	Write a program that read and display floating point number.
#include<stdio.h> int main ()
{

int n;
printf("Enter N = "); scanf("%f", &n);
printf("The integer number is : %f", n); return 0;
}




3
 
5.	Write a program that read and display long number.
#include<stdio.h> int main ()
{

long n;
printf("Enter N = "); scanf("%ld", &n);
printf("The long number is : %ld", n); return 0;
}

6.	Write a program that read and display double number.
#include<stdio.h> int main ()
{

double n; printf("Enter N = "); scanf("%lf", &n);
printf("The double number is : %lf", n); return 0;
}

7.	Write a program that read and display any character.
#include<stdio.h> int main ()
4
 
{
char ch;
printf("Enter Any Character = "); scanf("%c", &ch);
printf("The Character Is : %c", ch); return 0;
}

8.	Write a program that read any character and display its ASCII value.
#include<stdio.h> int main ()
{

char ch;
printf("Enter Any Character = "); scanf("%c", &ch);
printf("The ASCII Value Is : %d", ch); return 0;
}

9.	Write a program that read ASCII value and display its equivalent character.
#include<stdio.h> int main ()
{

5
 
char ch;
printf("Enter ASCII value = "); scanf("%d", &ch);
printf("The Character Is : %c", ch); return 0;
}

10.	Write a program that read any lower case character and display in upper case.
#include<stdio.h>
int main ()
{

char lower, upper;
printf("Enter any lower case character : "); scanf("%c", &lower);
upper = lower-32;
printf("The Upper case character is : %c", lower-32); return 0;
}

11.	Write a program that read any upper case character and display in lower case.
#include<stdio.h> int main ()
{

6
 
char upper, lower;
printf("Enter any upper case character : "); scanf("%c", &upper);
lower = upper+32;
printf("The lower case character is : %c", upper+32); return 0;
}

12.	Write a program that read any decimal number and display its equivalent octal number.
#include<stdio.h> int main ()
{

int n;
printf("Enter any Decimal number = "); scanf("%d", &n);
printf("Equivalent Octal number is : %o. ", n); return 0;
}

13.	Write a program that read any decimal number and display its equivalent hexadecimal number.
#include<stdio.h> int main ()
{

7
 
int n;
printf("Enter any Decimal number = "); scanf("%d", &n);
printf("Equivalent Hexadecimal number is : %x. ", n); return 0;
}

14.	Write a program that read any octal number and display its equivalent decimal number.
#include<stdio.h> int main ()
{

int n;
printf("Enter Octal any number = "); scanf("%o", &n);
printf("Equivalent Decimal number is : %d ", n); return 0;
}

15.	Write a program that read any hexadecimal number and display its equivalent decimal number.
#include<stdio.h> int main ()
{

int n;

8
 
printf("Enter any Hexadecimal number = "); scanf("%x", &n);
printf("Equivalent Decimal number is : %d ", n); return 0;
}

16.	Write a program that read and display a word.
#include<stdio.h> int main ()
{

char st[15];
printf("Enter Any Word : "); scanf("%s", &st);
printf("The Word Is : %s", st); return 0;
}
17.	Write a program that read and display a line of text.
#include<stdio.h> int main ()
{

char st[100];
printf("Enter Any Line : "); gets(st);


9
 
printf("The Word Is : %s", st); return 0;
}

18.	Write a program that read any date in the format DD/MM/YYYY and display day, month. Year separately.
#include<stdio.h> int main ()
{

int d, m, y;
printf("Enter any date in format (DD/MM/YYYY) : "); scanf("%d%d%d", &d, &m, &y);
printf("\nDay = %d\nMonth = %d\nYear = %d",d,m,y); return 0;
}

Operator
1.	Write a program that read two integer and display sum.
#include<stdio.h> int main ()
{

int a, b, sum; printf("Enter A = ");
10
 
scanf("%d", &a); printf("Enter B = "); scanf("%d", &b); sum = a+b;
printf("The Sum Is : %d", sum); return 0;
}

2.	Write a program that read two integer and display subtracts.
#include<stdio.h> int main ()
{

int a, b, sub; printf("Enter A = "); scanf("%d", &a); printf("Enter B = "); scanf("%d", &b); sub = a-b;
printf("The Subtracts Is : %d", sub); return 0;
}

3.	Write a program that read two integer and display product.

11
 
#include<stdio.h> int main ()
{

int a, b, pro; printf("Enter A = "); scanf("%d", &a); printf("Enter B = "); scanf("%d", &b); pro = a*b;
printf("The Product Is : %d", pro); return 0;
}

4.	Write a program that read two integer and display divide two integer.
#include<stdio.h> int main ()
{

int a, b; float div;
printf("Enter A = "); scanf("%d", &a); printf("Enter B = "); scanf("%d", &b);

12
 
div =(float)a/b;
printf("The divide Is : %.2f", div); return 0;
}

5.	Write a program that read and divide two floating point number.
#include<stdio.h> int main ()
{

float a, b; printf("Enter A = "); scanf("%d", &a); printf("Enter B = "); scanf("%d", &b);
printf("The divide Is : %.2f", a/b); return 0;
}

6.	Write a program that read two integer and display remainder.
#include<stdio.h> int main ()
{

int a, b, rem;

13
 
printf("Enter A = "); scanf("%d", &a); printf("Enter B = "); scanf("%d", &b); rem = a%b;
printf("Remainder : %d", rem); return 0;
}

7.	Write a program that read radius of a circle and display area.
#include<stdio.h> int main ()
{

float r, area; printf("Enter Radius : "); scanf("%f", &r);
area = 3.1416*r*r;

printf("The Area Is %.2f: ", area); return 0;
}






14
 
8.	Write a program that read radius of a circle and
display area.

#include<stdio.h>
#include<math.h> int main ()
{

float r, area; printf("Enter Radius : "); scanf("%f", &r);
area = M_PI*r*r;

printf("The Area Is %.2f: ", area); return 0;
}

9.	Write a program that read radius of a circle and display area.
#include<stdio.h>
#define pi 3.1416 int main ()
{

float r, area;


15
 
printf("Enter Radius : "); scanf("%f", &r);
area = pi*r*r;

printf("The Area Is %.2f: ", area); return 0;
}

10.	Write a program that read temperature in Celsius and display in Fahrenheit.
#include<stdio.h> int main ()
{

float c, f;

printf("Enter Celsius temperature : "); scanf("%f", &c);
f = (float)9/5*c+32; printf("Fahrenheit = %.2f", f); return 0;
}



16
 
11.	Write a program that read temperature in Fahrenheit
and display in Celsius.

#include<stdio.h> int main ()
{

float f, c;

printf("Enter Fahrenheit temperature : "); scanf("%f", &f);
c = (float)5/9*f-32; printf("Celsius = %.2f", c); return 0;
}

12.	Write a program that read two number and display bitwise AND.
#include<stdio.h> int main ()
{
int a, b, bitwise; printf("Enter A = ");

17
 
scanf("%d", &a); printf("Enter B = "); scanf("%d", &b); bitwise = a&b;
printf("Bitwise AND Number Is : %d", bitwise); return 0;
}

13.	Write a program that read two number and display bitwise OR.
#include<stdio.h> int main ()
{

int a, b, bitwise; printf("Enter A = "); scanf("%d", &a); printf("Enter B = "); scanf("%d", &b); bitwise = a|b;
printf("Bitwise OR Number Is: %d", bitwise);
18
 
return 0;

}

14.	Write a program that read a number and divide by two using shift operator.
#include<stdio.h> int main ()
{

int n;

printf("Enter N = "); scanf("%d", &n);
n = (n>>1);

printf("Number is : %d", n); return 0;
}

15.	Write a program that read a number and multiply by two using shift operator.
#include<stdio.h> int main ()
{

19
 
int n;

printf("Enter N = "); scanf("%d", &n);
n = (n<<1);

printf("Number is : %d", n); return 0;
}

16.	Write a program that read a number and multiply by five using shift operator.
#include<stdio.h> int main ()
{

int n;

printf("Enter N = "); scanf("%d", &n);
n = (n<<2)+n;

printf("Number is : %d", n); return 0;
}
20
 
17.	Write a program that read a number and mod by 4
using bitwise AND.

#include<stdio.h> int main ()
{

int n;

printf("Enter N = "); scanf("%d", &n);
printf("The Number Is : %d", n&3); return 0;
}

18.	Write a program that read a number and mod by 7 using bitwise AND.
#include<stdio.h> int main ()
{

int n;

printf("Enter N = "); scanf("%d", &n);
21
 
printf("The Number Is : %d", n&6); return 0;
}

	Math.h



1.	Write a program than read any integer and display its absolute value.
#include<stdio.h>

#include<library.h>

#include<math.h> int main()


{

int n,abs(n); printf("Enter N = "); scanf("%d", &n);
printf("The Absolute Value Is : abs(%d)=%d", n,abs(n));



22
 
return 0;

}

2.	Write program that read a program any angle T and display sin (T).
#include<stdio.h>

#include<math.h>



int main()



{

int T;

printf("Enter Any Angle T : "); scanf("%d", &T);
printf("Sin (%d) = %.3f",T,sin((T*M_PI)/180)); return 0;
}

3.	Write a program that read any angle (T) and display cos (T)

23
 
#include<stdio.h>

#include<math.h>



int main()



{

int T;

printf("Enter Any Angle T : "); scanf("%d", &T);


printf("Cos (%d) = %.3f",T,cos((T*M_PI)/180)); return 0;
}

4.	Write a program that read any angle (T) and display tan (T)
#include<stdio.h>

#include<math.h> int main()

24
 
{

int T;

printf("Enter Any Angle T : "); scanf("%d", &T);
printf("Tan (%d) = %.3f",T,tan((T*M_PI)/180)); return 0;
}

5.	Write a program that read any angle (T) and display cot (T)
#include<stdio.h>

#include<math.h> int main()
{

int T;

printf("Enter Any Angle T : "); scanf("%d", &T);
printf("Cot (%d) = %.3f",T,1/tan((T*M_PI)/180)); return 0;

25
 
}

6.	Write a program that read any angle (T) and display sec(T)
#include<stdio.h>

#include<math.h> int main()
{

int T;

printf("Enter Any Angle T : "); scanf("%d", &T);
printf("sec (%d) = %.3f",T,1/cos((T*M_PI)/180)); return 0;
}

7.	Write a program that read any angle (T) and display cosec (T).
#include<stdio.h>

#include<math.h> int main()
26
 
{

int T;

printf("Enter Any Angle T : "); scanf("%d", &T);
printf("cosec (%d) = %.3f",T,1/sin((T*M_PI)/180)); return 0;
}

8.	Write a program that read a value (T) and display sin^-1(T) (sin inverse (T).
#include<stdio.h>

#include<math.h> int main()
{

float T;

printf("Enter Any Value T : "); scanf("%f", &T);
printf("sin inverse (%f) = %.3f",T,asin((T*180)/M_PI)); return 0;
27
 
}

9.	Write a program that read a value T and display cos inverse (T).
#include<stdio.h>

#include<math.h> int main()
{

float T;

printf("Enter Any Value T : "); scanf("%f", &T);
printf("cos inverse (%f) = %.3f",T,acos((T*180)/M_PI)); return 0;
}

10.	Write a program that read any angle T and display tan inverse (T).
#include<stdio.h>

#include<math.h>





28
 
int main()

{

float T;

printf("Enter Any Value T : "); scanf("%f", &T);
printf("tan inverse (%f) = %.3f",T,atan((T*180)/M_PI)); return 0;
}

11.	Write a program that read a value T and display cot inverse (T).
#include<stdio.h>

#include<math.h> int main()
{

float T;

printf("Enter Any Value T : "); scanf("%d", &T);
printf("cot inverse (%f) = %.3f",T,atan((1.0/T)*180)/M_PI));


29
 
return 0;

}

12.	Write a program that read a value T and display see inverse (T).
#include<stdio.h>

#include<math.h> int main()
{

float T;

printf("Enter Any value T : "); scanf("%f", &T);
printf("sec inverse (%f) = %.3f",T,acos(((1.0/T)*180)/M_PI)); return 0;
}

13.	Write a program that read a value T and display cosec inverse (T).
#include<stdio.h>

#include<math.h>


30
 
int main()

{

float T;

printf("Enter Any value T : "); scanf("%f", &T);
printf("cos inverse (%f) = %.3f",T,asin(((1.0/T)*180)/M_PI)); return 0;
}

14.	Write a program that read two numbers (X, Y) and display the value of XY.
#include<stdio.h>

#include<math.h>



int main()



{

int X ,Y ,Result;

printf("Enter The Value of X & Y : ");


31
 
scanf("%d %d", &X,&Y); Result=pow(X,Y);
printf("The Value of XY is : %d", Result); return 0;
}

15.	Write a program that read any number and display its square root.
#include<stdio.h>

#include<math.h> int main()
{

int X;

float Square_root;

printf("Enter The Value of X : "); scanf("%d", &X);
Square_root = sqrt(X);

printf("The Value of Square RooT is : %.3f",Square_root); return 0;

32
 
}

16.	Write a program that read any number X and display e to the power x.
#include<stdio.h>

#include<math.h> int main()
{

float X,Result;

printf("Enter Any Number : "); scanf("%f", &X);
Result = exp(X);

printf("e to the power X is : %.3f", Result); return 0;
}

17.	Write a program that read any number X and display log(X).
#include<stdio.h>

#include<math.h>


33
 
int main()

{

float X,Result;

printf("Enter Any Number : "); scanf("%f", &X);
Result = log(X);

printf("log(X) is : %.3f", Result); return 0;
}

18.	Write a program that read any number X and display log10 (X).
#include<stdio.h>

#include<math.h> int main()
{

float X,Result;

printf("Enter Any Number : "); scanf("%f", &X);
34
 
Result = log10(X);

printf("log10(X) is : %.3f", Result); return 0;
}

19.	Write a Program that Read any Radius R and display its Area.
#include<stdio.h>

#define pi 3.14159 int main(void)
{

double A,R;

printf("Enter Any Radius R is : "); (scanf("%lf",&R);
A=pi*R*R; printf("A=%.4lf\n", A); return 0;
}





35
 
20.	Write a Program that Read any Radius R and display
its Area.

#include<stdio.h>

#include<math.h> int main(void)
{

double A,R;

printf("Enter Any Radius R is : "); (scanf("%lf",&R);  A=M_PI*R*R;
printf("Area =%.4lf\n", A); return 0;
}

21.	Write a program that read any floating point number N and display its greatest integer number.
#include<stdio.h>

#include<math.h> int main(void)
36
 
{

float N, Result;

printf("Enter Any Floating Point Number : "); scanf("%f", &N);
Result = floor(N);	/*Here floor is a function */ printf("Original Number Is : %.2f\n", N); printf("The Greatest Number is : %.2f\n", Result); return 0;
}

22.	Write a program that read any floating point number and display its Rounded Up number.
#include<stdio.h>

#include<math.h> int main(void)
{

float N, Result;

printf("Enter Any Floating Point Number : "); scanf("%f", &N);

37
 
Result = ceil(N); /*Here ceil is a function */ printf("Original Number Is : %.2f\n", N); printf("The Number Rounded Up : %.2f\n", Result); return 0;
}

23.	Write a program that read any integer number Dividend and Divisor and display its Quotient & Remainder.
#include<stdio.h>

#include<math.h> int main(void)
{

int Dividend, Divisor, Quotient, Remainder; printf("Enter Dividend Number : "); scanf("%d", &Dividend);
printf("Enter Divisor Number : "); scanf("%d", &Divisor);
Quotient = Dividend/Divisor; Remainder = Dividend%Divisor;

38
 
printf("Quotient Is : %d\n", Quotient); printf("Remainder Is : %d\n", Remainder); return 0;
}

24.	Write a program that print the size of every data types in bytes.
#include<stdio.h>

#include<math.h> int main(void)
{

int A; float B; double C; char D;
long long int X;

printf("Size of int: %d bytes\n", sizeof (A)); printf("Size of float: %d bytes\n", sizeof (B)); printf("Size of double: %d bytes\n", sizeof (C));

39
 
printf("Size of char: %d bytes\n", sizeof (D)); printf("Size of long long int: %d bytes\n", sizeof (X)); return 0;
}



Some Important Home Works For You !!!


1.	Write a program that read three integer numbers and display sum of their every Square Roots.
2.	Write a program that read three number (A, B, C) and display their Sum in the following format: (AB+BA+CA).
3.	Write a program that read any negative integer and display its absolute value.
4.	Write a program that read any value T and display cos2 (T) +sin2 (T).
5.	Write a program that read any value of X & Y and display the following equation: 9x2 - 30xy + 25y2.
6.	Write a program that read any value of X & Y and display the following equation: 8x3 + 36x2 y + 54xy2 + 27y3.

40
 
7.	Write a program that contain a floating point number X
= sqrt (3) + sqrt(2) and find the result of following equation : X3 + X-3 = ???.

	Conditional Logic


1.	Write a program that read an integer number X and display it odd number or even number.
#include<stdio.h> int main()
{

int X;

printf("Enter Any Integer Number : "); scanf("%d", &X);
if(X%2==0)

printf("The Number Is Even\n"); else

41
 
printf("The Number Is Odd\n"); return 0;
}

2.	Write a program that read any integer X and print the number is less than or greater than or equal to 10.
#include<stdio.h> int main()
{

int X;

printf("Enter Any Integer Number : "); scanf("%d", &X);
if(X<10)

printf("The Number Is Less Than 10.\n"); else if(X>10)
printf("The Number Is Greater Than 10.\n"); else
printf("The Number Is Equal To 10.\n"); return 0;

42
 
}

3.	Write a program that read any integer X and print positive or negative number (where 0 is a positive number).
#include<stdio.h> int main()
{

int X;

printf("Enter Any Integer Number : "); scanf("%d", &X);
if(X>=0)

printf("Positive Number\n"); else
printf("Negative\n"); return 0;
}

4.	Write a program that read any character and print vowel or consonant.
#include<stdio.h>


43
 
int main()

{

char ch;

printf("Enter Any Character : "); scanf("%c", &ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=
='O'||ch=='U')

printf("Vowel\n"); else
printf("Consonant\n"); return 0;
}

5.	Write a program that read two integer number and display the Maximum number.
#include<stdio.h> int main()
{

int A,B,Maximum;
44
 
printf("Enter A = "); scanf("%d", &A); printf("Enter B = "); scanf("%d", &B);
if(A>B)

Maximum=A; else
Maximum=B;

printf("The Maximum Number Is : %d\n",Maximum); return 0;
}

6.	Write a program that read two integer number and display the Minimum number.
#include<stdio.h> int main()
{

int A,B,Minimum; printf("Enter A = ");

45
 
scanf("%d", &A); printf("Enter B = "); scanf("%d", &B);
if(A<B)

Minimum=A; else
Minimum=B;

printf("The Minimum Number Is : %d\n",Minimum); return 0;
}

7.	Write a program that read three numbers and display Maximum number.
#include<stdio.h> int main()
{

int A,B,C,Maximum; printf("Enter A = "); scanf("%d",&A);

46
 
printf("Enter B = "); scanf("%d",&B); printf("Enter C = "); scanf("%d",&C); if(A>B)
{

if(A>C)

Maximum=A; else
Maximum=C;

}

else

{

if(B>C)

Maximum=B; else
Maximum=C;

}


47
 
printf("MAXIMUM = %d\n", Maximum); return 0;
}

8.	Write a program that read three number and display Minimum number.
#include<stdio.h> int main()
{

int A,B,C,Minimum; printf("Enter A = "); scanf("%d", &A); printf("Enter B = "); scanf("%d", &B); printf("Enter C = "); scanf("%d", &C); if(A<B)
{

if(A<C)


48
 
Minimum=A; else
Minimum=C;

}

else

{

if(B<C)

Minimum=B; else
Minimum=C;

}

printf("MINIMUM NUMBER : %d\n", Minimum); return 0;
}

9.	Write a program that read three number and display Medium number.
#include<stdio.h> int main()

49
 
{

int A,B,C,Medium; printf("Enter A = "); scanf("%d", &A); printf("Enter B = "); scanf("%d", &B); printf("Enter C = "); scanf("%d", &C); if(A>B)
{

if(A>C)

{

if(B>C)

Medium=B; else
Medium=C;

}

else


50
 
Medium=A;

}

else

{

if(B>C)

{

if(A>C)

Medium=A; else
Medium=C;

}

else

Medium=B;

}

printf("MEDIUM NUMBER : %d\n", Medium); return 0;
}





51
 
10.	Write a program that read marks and display pass or
fail.

#include<stdio.h> int main()
{

int Marks;

printf("Enter Marks = "); scanf("%d", &Marks); if(Marks >= 40)
printf("Pass\n"); else
printf("Fail\n"); return 0;
}

11.	Write a program that read your age and display you can give vote or not eligible for voting.
#include<stdio.h> int main()
52
 
{

int age;

printf("Input Your Age:"); scanf("%d",&age);
if(age >=18)

printf("You can vote"); else
printf("You are not eligible for voting"); return 0;
}

12.	Write a program that read any marks and display result in division.
#include<stdio.h> int main()
{

int Marks;

printf("Enter Marks = "); scanf("%d", &Marks);

53
 
if(Marks >= 60 && Marks <=100) printf("First Division\n");
else if (Marks >=45 && Marks <60) printf("Second Division\n");
else if(Marks >=33 && Marks <45) printf("Third Division\n");
else

printf("Fail Division\n"); return 0;
}

13.	Write a program that read Marks and display result in grade & point (According to University result sheet).
#include<stdio.h> int main()
{

int Marks;

printf("Enter Marks = "); scanf("%d", &Marks);

54
 
if(Marks >=80 && Marks <=100) printf("Grade 'A+'\nPoint = 4.00\n");
else if (Marks >=75 && Marks <80) printf("Grade 'A'\nPoint = 3.75\n");
else if(Marks >=70 && Marks <75) printf("Grade 'A-'\nPoint = 3.50\n");
else if(Marks >=65 && Marks <70) printf("Grade 'B+'\nPoint = 3.25\n");
else if (Marks >=60 && Marks <65) printf("Grade 'B'\nPoint = 3.00\n");
else if(Marks >=55 && Marks <60) printf("Grade 'B-'\nPoint = 2.75\n");
else if(Marks >=50 && Marks <55) printf("Grade 'C+'\nPoint = 2.50\n");
else if(Marks >=45 && Marks <50) printf("Grade 'C'\nPoint =2.25\n");
else if(Marks >=40 && Marks <45) printf("Grade 'D'\nPoint =2.00\n");

55
 
else

printf("Grade 'F'\nPoint =0.00\n"); return 0;
}

14.	Write a program that read any year and display leap year or not leap year.
#include<stdio.h> int main()
{

int Year;

printf("Enter Year = "); scanf("%d", &Year); if(Year%4!=0)
printf("Not Leap Year\n"); else if (Year%4==0)
printf("Leap Year\n"); else if(Year%100!=0)
printf("Leap Year\n");


56
 
else if(Year%400!=0) printf("Not Leap Year\n");
else

printf("Leap Year\n"); return 0;
}

15.	Write a program that read three numbers(A,B,C) and determine the roots of the following equation : AX^2+BX+c=0.
#include<stdio.h>

#include<math.h> int main()
{

float A,B,C,D; float X1,X2,P,Q;
printf("Enter A = "); scanf("%f", &A); printf("Enter B = ");

57
 
scanf("%f", &B); printf("Enter C = "); scanf("%f", &C); D=B*B-4*A*C; if(D>0)
{

X1=(-B+sqrt(D))/(2*A);

X1=(-B+sqrt(D))/(2*A);

printf("\nX1= %.2f\nX2= %.2f\n", X1,X2);

}

else if(D<0)

{

P= -B/(2*A);

Q=sqrt(-D)/(2*A);

printf("\nX1= %.2f + %.2f \nX2=  %.2f - %.2f\n",P,Q,P,Q);

}

else

{


58
 
X1=X2=-B/(2*A);

printf("\nX1= %.2f\nX2= %.2f\n", X1,X2);

}

return 0;

}

16.	Write a program in C that Check whether Alphabet or not.
#include<stdio.h> int main()
{

char ch;

printf("Enter a character: "); scanf("%c",&ch);


if( (ch>='a'&& ch<='z') || (ch>='A' && ch<='Z')) printf("%c is an alphabet.",ch);
else

printf("%c is not an alphabet.",ch);


59
 
return 0;

}

17.	Write a program that read three numbers and display Maximum using only if statement.
#include<stdio.h> int main(void)
{

int A, B, C; printf("Enter A = "); scanf("%d", &A); printf("Enter B = "); scanf("%d", &B); printf("Enter C = "); scanf("%d", &C); if(A>=B && A>=C)
printf("Maximum Number is : %d\n", A); if(B>=A && B>=C)
printf("Maximum Number is : %d\n", B);


60
 
if(C>=A && C>=B)

printf("Maximum Number is : %d\n", C); return 0;
}

18.	Write a program that read three numbers and display Maximum.
#include<stdio.h> int main(void)
{

int A, B, C; printf("Enter A = "); scanf("%d", &A); printf("Enter B = "); scanf("%d", &B); printf("Enter C = "); scanf("%d", &C); if(A>=B && A>=C)
printf("Maximum Number is : %d\n", A);


61
 
if(B>=A && B>=C)

printf("Maximum Number is : %d\n", B); else
printf("Maximum Number is : %d\n", C); return 0;
}

19.	Write a program that read two integer and one calculate operator character and display summation, subtraction, multiply, divide and remainder.
#include<stdio.h>

#include<math.h> int main(void)
{

int A, B, Math; char Ch;
printf("Enter A then Operator Symbol Ch = and B = \n"); scanf("%d%c%d", &A, &Ch, &B);
if(Ch=='+')


62
 
Math = A+B; else if(Ch=='-')
Math = A-B; else if(Ch=='*') Math = A*B;
else if(Ch=='/') Math = (A/B);
else if(Ch=='%') Math = A%B;
printf("\n");

printf("The Result is : %d\n", Math); return 0;
}

20.	Write a program that read two floating point number and one calculate operator character and display summation, subtraction, multiply, divide and remainder.
#include<stdio.h>

#include<math.h>


63
 
int main(void)

{

float A, B, Math; char Ch;
printf("Enter A then Operator Symbol Ch = and B = \n"); scanf("%f%c%f", &A, &Ch, &B);
if(Ch=='+')

Math = A+B; else if(Ch=='-')
Math = A-B; else if(Ch=='*') Math = A*B;
else if(Ch=='/') Math = (A/B);
else if(Ch=='%')

Math = fmod(A,B); /* fmod() is Function */ printf("\n");
printf("The Result is : %.2f\n", Math);


64
 
return 0;

}

Some Important Home Works For You!!!

1.	Write a program that read three numbers and display Maximum, Medium, Minimum number.
2.	Write a program that read two number and display it’s each are equal or not equal.
3.	Write a program that read two integer number and print they are multiple or not multiple.
4.	Write a program that any number 1 to 10 and display equivalent roman number.
5.	Write a program that read your age and display you have national ID card or Smart card or just birthday card. Hare 1 to 11 got only birthday card and 12 to 17 got Smart card or 18 up got national ID card.







Switch



65
 
1.	Write a program read any digit and display by their
spelling.

# include<stdio.h> int main ()
{

int N; scanf("%d",&N);


switch (N)

{

case 0:

printf("ZERO\n"); break;
case 1:

printf("ONE\n"); break;
case 2:

printf("TWO\n");


66
 
break; case 3:
printf("THREE\n"); break;
case 4:

printf("FOUR\n"); break;
case 5:

printf("FIVE\n"); break;
case 6:

printf("SIX\n"); break;
case 7:

printf("SEVEN\n"); break;
case 8:

printf("EIGHT\n");


67
 
break; case 9:
printf("NINE\n"); break;
default:

printf("NOT A SINGLE DIGIT\n");

break;

}

return 0;

}

2.	Write a program that read your marks and display your grade.
#include<stdio.h> int main()
{

int Marks; scanf("%d", &Marks); switch(Marks/10)

68
 
{

case 10:

printf("Grade 'A+'\n"); break;
case 9:

printf("Grade 'A+'\n"); break;
case 8:

printf("Grade 'A+'\n"); break;
case 7:

printf("Grade 'A'\n"); break;
case 6:

printf("Grade 'A-'\n"); break;
case 5:

printf("Grade 'B'\n");


69
 
break; case 4:
printf("Grade 'C'\n"); break;
default :

printf("Grade 'F'\n”); break;
}

return 0;

}

3.	Write a program that any number and display Month name according to number.
#include<stdio.h> int main()
{

int N; scanf("%d", &N); switch(N)

70
 
{

case 1:

printf("January\n"); break;
case 2:

printf("February\n"); break;
case 3:

printf("March\n"); break;
case 4:

printf("April\n"); break;
case 5:

printf("May\n"); break;
case 6:

printf("June\n");


71
 
break; case 7:
printf("July\n"); case 8:
printf("August\n"); break;
case 9:

printf("September\n"); break;
case 10:

printf("October\n"); break;
case 11:

printf("November\n"); break;
case 12:

printf("December\n"); break;

72
 
default :

printf("\n"); break;
}

return 0;

}

4.	Write a program that read any day and display its spelling.
#include<stdio.h> int main(void)
{

int day;

printf("Enter Day :"); scanf("%d",&day); switch (day)
{

case 1 : printf("Saturday\n");

73
 
break; case 2 :
printf("Sunday\n"); break;
case 3 : printf("Monday\n"); break;
case 4 : printf("Tuesday\n"); break;
case 5 : printf("Wednesday\n"); break;
case 6 : printf("Thursday\n"); break;
case 7 : printf("Friday\n");

74
 
break; default :
printf("Not an allowable day number\n"); break;
}

return 0;

}

Some Important Home Works For You!!!


1.	Write a program that read any number in single digit and print their equivalent Roman spelling.
2.	Write a program that read an integer it contains yours class roll and display yours name according to roll number.
3.	Write a program that Read any grade and print your performance according to your grade. [N.B. Hare Grade ‘A+’ is Excellent	& ‘A’ is Best & ‘A-‘ is Batter & ‘B’ is Good & ‘C’ is Not very bad & ‘D’ is Pass But Not Good and ‘F’ is Fail Try again.


75
 
4.	Write a program that read two integer and one
calculate operator character and display summation, subtraction, multiply, divide and remainder.
Conditional Operator

1.	Write	a	program	that	read	two	number	and display Maximum number.
#include<stdio.h> int main(void)
{

int A, B, Maximum; printf("Enter A = "); scanf("%d",&A); printf("Enter B = "); scanf("%d",&B); Maximum=(A>B)? A : B;
printf("Maximum Number : %d\n",Maximum);
76
 
return 0;

}

2.	Write	a	program	that	read	two	number	and display Maximum number.
#include<stdio.h> int main(void)
{

int A, B, Maximum; printf("Enter A = "); scanf("%d", &A); printf("Enter B = "); scanf("%d", &B);
printf("Maximum Number : %d\n",(A>B)? A : B); return 0;
}







77
 
3.	Write a program that read three number    and
display Maximum number.

#include<stdio.h> int main(void)
{

int A, B, C, Maximum; printf("Enter A = "); scanf("%d",&A); printf("Enter B = "); scanf("%d",&B); printf("Enter C = "); scanf("%d",&C);
Maximum=(A>B)? (A>C)? A : C : (B>C)? B : C;

printf("Maximum Number is : %d\n", Maximum); return 0;
}



78
 
4.	Write a program that read three number and
display Maximum number.

#include<stdio.h> int main(void)
{

int A, B, C, Maximum; printf("Enter A = "); scanf("%d",&A); printf("Enter B = "); scanf("%d",&B); printf("Enter C = "); scanf("%d",&C);
printf("Maximum Number is : %d\n", (A>B)? (A>C)? A : C : (B>C)? B : C);
return 0;

}




79
 
5.	Write a program that read three number and
display medium number.

#include<stdio.h> int main(void)
{

int A, B, C, Medium; printf("Enter A = "); scanf("%d",&A); printf("Enter B = "); scanf("%d",&B); printf("Enter C = "); scanf("%d",&C);
Medium=(A>B)? (A>C)? (B>C)? B : C : A : (B>C)? (A>C)?
A : C : B;

printf("Medium Number is : %d\n", Medium); return 0;
}

80
 
6.	Write a program that read your Marks and print
Pass or Fail.

#include<stdio.h> int main(void)
{

int Marks;

printf("Enter Marks = "); scanf("%d", &Marks);
printf("%s", (Marks>=33)? "Pass" : "Fail"); return 0;
}

7.	Write a program that read an integer number and print Odd or Even.
#include<stdio.h> int main(void)
{



81
 
int N;

printf("Enter Any Number = "); scanf("%d",&N);
printf("%s", (N%2==0)? "Even" : "Odd"); return 0;
}

8.	Write a program that read any year and print Leap year or Not Leap year.
#include<stdio.h> int main(void)
{

int Year;

printf("Enter Any Year = "); scanf("%d",&Year);
printf("%s", (Year%4==0 && Year%100!=0)? "Leap Year" : (Year%400==0)? "Leap Year" : "Not Leap Year");
return 0;

82
 
}

Some Important Home Works For You!!!


1.	Write a program that read two numbers and display Minimum Number.
2.	Write a program that read three numbers and display Minimum Number.
3.	Write a program that read your age and display you can give vote or no permit.
4.	Write a program that read your result in grade and display your division. [N.B. Where grade ‘A’ is first division & ‘B’ is second division & ‘C’ is third division].
5.	Write a program that read any number and display it positive or negative.
6.	Write a program that read three numbers and display Maximum, Medium, and Minimum Number.






83
 

	Loop
1.	Write a program that read an integer number and print first 10 integer number.
#include<stdio.h> int main(void)
{

int i, N=10;

for(i=1; i<=10; i++) printf("%d\n", i );
return 0;

}

2.	Write a program that read an integer number N and display all Even number till N.
#include<stdio.h> int main(void)
{

84
 
int i, N; printf("Enter N = "); scanf("%d", &N);
for(i=0 ; i<=N ; i=i+2) printf("%d\n", i); return 0;
}

3.	Write a program that read any positive integer and display sum of its digits.
#include<stdio.h> int main(void)
{

int n, Sum=0; printf("Enter N = "); scanf("%d", &n); while(n>0)
{

Sum=Sum+n%10;


85
 
n=n/10;

}

printf("Sum of Digits : %d\n", Sum); return 0;
}

4.	Write a program that read any positive integer and display sum of its digits.
#include<stdio.h> int main(void)
{

int N, i, Sum=0;

printf("Enter any integer number : "); scanf("%d", &N);
for(; N>0 ;)

{

Sum = Sum + N%10; N=N/10;
}


86
 
printf("Sum of Digit is : %d", Sum); return 0;
}

5.	Write a program that read any positive integer and display its reverse.
#include<stdio.h> int main(void)
{

int n , Reverse=0; printf("Enter N = "); scanf("%d", &n); while(n>0)
{

Reverse=Reverse*10+n%10; n=n/10;
}

printf("Reverse Number is : %d\n", Reverse); return 0;

87
 
}

6.	Write program that read any integer number N and print Prime or Not Prime number.
#include<stdio.h> int main(void)
{

int i, N, Check=0;

printf("Enter Any Number For Check : "); scanf("%d", &N);
for(i=2 ; i<N ; i++)

{

if(N%i==0) Check=1;
}

if(Check==1)

printf("Not Prime Number\n"); else
printf("Prime Number\n");


88
 
return 0;

}

7.	Write	a	program	that	read	any	integer	number	and display its digital root.
#include<stdio.h> int main()
{

int n,Digital_Root;

printf("Enter Any Integer Number : "); scanf("%d", &n);
while(n>9)

{

Digital_Root=0; while(n>0)
{

Digital_Root=Digital_Root+n%10; n=n/10;
}


89
 
n=Digital_Root;

}

printf("Digital Root is : %d\n", Digital_Root); return 0;
}

8.	Write a program that read any integer number and test Prime or Not Prime.
#include<stdio.h> int main(void)
{

int i,N,Check;

printf("Enter Any Number For Check : "); scanf("%d", &N);
if(N<2)

Check=0; else
{

Check=1;


90
 
for(i=2 ; i<N ; i++)

{ if(N%i==0)
Check=0;

}

}



if(Check==1)

printf("Prime Number\n"); else
printf("Not Prime Number\n"); return 0;
}

9.	Write a program that read any integer number and test Prime or Not Prime.
#include<stdio.h> int main(void)
{


91
 
int i, N, Check;

printf("Enter Any Number For Check : "); scanf("%d", &N);
if(N<2)

Check=0; else
{

Check=1;

for(i=2 ; i<N/2 ; i++)

{ if(N%i==0)
Check=0;

}

}



if(Check==1)

printf("Prime Number\n"); else

92
 
printf("Not Prime Number\n"); return 0;
}



10.	Write a program that print all prime numbers from 1 to n.
#include<stdio.h>

#include<math.h> int main(void)
{

int i,j,N,Check,t; printf("Enter N = "); scanf("%d", &N); for(i=2 ; i<N ; i++)
{

Check=1; t=sqrt(i);
for(j=2 ; j<=t ; j++)

93
 
{

if(i%j==0) Check=0;
}

if(Check==1); printf("%d\n", i);
}

return 0;

}

11.	Write a program that print all prime number from M to N (M<N).
#include<stdio.h> int main(void)
{

int M, N, i, j, Check; printf("Enter M = "); scanf("%d", &M); printf("Enter N = ");

94
 
scanf("%d", &N);

printf("Prime Number between %d to %d\n", M, N); for(i=M+1 ; i<N ; i++)
{

Check=0;

for(j=2 ; j<i/2 ; j++)

{

if(i%j==0)

{

Check=1; break;
}

}

if(Check==0) printf("%d\n", i);
}

return 0;

}


95
 
11.	Write a program that read an integer number and find
out number of digits in integer number (using for loop).

#include<stdio.h> int main(void)
{

int N,Count; printf("Enter N = "); scanf("%d", &N);
for(Count=0 ; N>0 ; Count++)

{

N=N/10;

}

printf("The Count Number Is : %d\n", Count); return 0;
}

12.	Write a program that count total prime numbers 1 to N.
#include<stdio.h>


96
 
#include<math.h> int main(void)
{

int i, j, t, N, Check, Count=0; printf("Enter N = "); scanf("%d", &N);
for(i=2 ; i<=N ; i++)

{

Check=1; t=sqrt (i);
for(j=2 ; j<=t ; j++)

{

if(i%j==0)

{

Check=0; break;
}

}


97
 
if(Check==1) Count++;



}

printf("The Count Number is : %d\n", Count); return 0;
}

13.	Write a program that print first N Fibonacci number (using for loop).
#include<stdio.h> int main(void)
{

int A, B, C, N, i;
printf("How Many Number : "); scanf("%d", &N);
A=0; B=1;


for (i=1 ; A<=N ; i++)
{

printf("%d\n",A);


98
 
C=A+B; A=B; B=C;
}

return 0;
}

14.	Write a program that print first N Fibonacci number (using while loop).
#include<stdio.h> int main(void)
{

int A, B, C, N, i;
printf("How Many Number : "); scanf("%d", &N);
A=0; B=1;


while(A<=N)
{

printf("%d\n", A); C=A+B;
A=B; B=C;

99
 
}
return 0;
}

15.	Write a program that print Nth Number is Fibonacci or Not Fibonacci Number.
#include<stdio.h> int main (void)
{

int N, i; long A,B,C;
printf("Enter A Number To Check Nth Number is Fibonacci	or Not : "); scanf("%d", &N);
A=0; B=1;


for (i=1 ; i<=N ; i++)
{

if(i==N) printf("%d\n", A); C=A+B;
A=B; B=C;
}

if(A==N)

100
 
printf("Fibonacci Number\n"); else
printf("Not Fibonacci Number\n"); return 0;
}

16.	Write	a	program	that	read	any	number	and	check Fibonacci or Not Fibonacci Number.
#include<stdio.h> int main()
{
int a, b, c, next, N; printf("Enter any number: "); scanf("%d", &N);
if((N==0)||(N==1))
printf("\n%d is a Fibonacci Number",N); else
{

a=0; b=1;
c=a+b; while(c<N)
{

a=b;

101
 
b=c; c=a+b;
}

if(c==N)
printf("\n%d is a Fibonacci Number\n",N); else
printf("\n%d is not a Fibonacci Number\n",N);
}

return 0;
}
17.	Write	a	program	that	read	any	number	and	display Strong or Not Strong Number.
#include<stdio.h> int main(void)
{

int i,fact,N,Rem,Sum=0,Check; printf("Enter a Number : "); scanf("%d", &N);
Check=N; while(N)
{

i=1; fact=1; Rem=N%10;

102
 
while(i<=Rem)
{

fact=fact*i;
++i;
}

Sum=Sum+fact; N=N/10;
}

if(Sum==Check)
printf("%d is Strong Number\n", Check); else
printf("%d is Not Strong Number\n", Check); return 0;
}

18.	Write a program that print all Strong numbers M to N (M<N).
#include<stdio.h> int main(void)
{

int Num, i, fact, Rem, Sum, Check; int M, N;
printf("Enter M : ");
scanf("%d", &M);

103
 
printf("Enter N : ");
scanf("%d", &N);


printf("Strong number is %d to %d",M , N);


for(Num=M ; Num<=N ; Num++)
{

Check=Num; Sum=0;
while(Check)
{

i=1;fact=1; Rem=Check%10; while(i<=Rem)
{

fact=fact*i; i++;
}

Sum=Sum+fact; Check=Check/10;
}

if(Sum==Num)
printf("\nStrong number is : %d\n", Num);

104
 
}
return 0;
}

19.	Write	a	program	that	read	any	number	and	display Palindrome or Not Palindrome Number.
#include<stdio.h> int main(void)


{
int Num, Rem, Sum=0, Check; printf("Enter Any Number : "); scanf("%d", &Num); Check=Num;
while(Num)
{

Rem=Num%10; Num=Num/10; Sum=Sum*10+Rem;
}

if(Check==Sum)
printf("%d is Palindrome\n", Check); else
printf("%d is not Palindrome\n", Check);

105
 
return 0;
}

20.	Write a program that print all Palindrome Number M to N (M<N).
#include<stdio.h> int main(void)
{

int Num, i, Rem, Sum, Check; int M, N;
printf("Enter M : ");
scanf("%d", &M);
printf("Enter N : ");
scanf("%d", &N);


printf("Palindrome number is %d to %d",M , N);


for(Num=M ; Num<=N ; Num++)
{

Check=Num; Sum=0;
while(Check)
{

Rem=Check%10;

106
 
Check=Check/10; Sum=Sum*10+Rem;
}

if(Sum==Num)
printf("\nPalindrome number is : %d\n", Num);

}
return 0;
}

21.	Write a program that read any number N and check Armstrong number or Not Armstrong Number (1<=N<1000).
#include<stdio.h> int main(void)
{

int N,N2,Remainder,Check=0; printf("Enter Any Number : "); scanf("%d", &N);
N2=N;
while(N2!=0)
{

Remainder=N2%10;
Check=Check + Remainder * Remainder * Remainder; N2=N2/10;
}

107
 
if(Check==N)
printf("%d is an Armstrong Number\n", N); else
printf("%d is an Not Armstrong Number\n", N); return 0;
}

22.	Write a program that print all Armstrong number from M to N (M<N) (here M<=1 & N<1000).
#include<stdio.h> int main(void)
{

int i, M, N, Remainder, Temp, Check; printf("Enter M = ");
scanf("%d", &M); printf("Enter N = "); scanf("%d", &N);
printf("Print Armstrong number between %d to %d\n",M,N); printf("\n");
for(i=M ; i<=N ; i++)
{

Temp =i; Check=0;

108
 
while (Temp!=0)
{

Remainder=Temp%10;
Check=Check + Remainder * Remainder * Remainder; Temp=Temp/10;
}

if(i==Check)
printf("Armstrong Number is %d\n", i);
}

return 0;
}

23.	Write a program that print all Armstrong number 1 to N.
#include<stdio.h> int main(void)
{

int i, M, N, Remainder, Temp, Check; printf("Enter M = ");
scanf("%d", &M); printf("Enter N = "); scanf("%d", &N);
printf("Print Armstrong number between %d to %d\n", M , N); printf("\n");

109
 
for(i=M ; i<=N ; i++)
{

Temp =i; Check=0;
while (Temp!=0)
{

Remainder=Temp%10;
Check=Check + Remainder * Remainder * Remainder; Temp=Temp/10;
}

if(i==Check)
printf("Armstrong Number is %d\n", i);
}

return 0;
}

24.	Write	a	program	that	read	any	integer	number	and display Multiplication table of N.
#include<stdio.h> int main(void)
{

int i, N;
printf("Enter Any Integer To Fine Multiplication Table : "); scanf("%d", &N);

110
 
for(i=1 ; i<=10 ; i++)
{

printf("%d * %d = %d\n", i, N, N*i);
}

return 0;
}

25.	Write	a	program	that	read	any	integer	number	and display its Factorial Number.
#include<stdio.h> int main(void)
{

int i, N;
long int Factorial=1;
printf("Enter Any Integer To Fine Its Factorial : "); scanf("%d", &N);
if(N<0)
printf("Error !!! Factorial of negative number doesn't exist."); else
{

for(i=1 ; i<=N ; i++)
{

Factorial=Factorial*i;
}

111
 
printf("Factorial of %d is : %ld\n", N, Factorial);
}

return 0;
}

26.	Write	a	program	that	read	any	integer	number	and display its Factors Number.
#include <stdio.h> int main(void)
{

int N,i;
printf("Enter Any Positive Integer: "); scanf("%d",&N);
printf("Factors of %d are : ", N); for(i=1; i<=N; ++i)
{

if(N%i==0) printf("%d\t", i);
}

return 0;
}

27.	Write a program that read two numbers and print its Greatest Common Divisor (GCD or HCF).
#include<stdio.h>

112
 
int main(void)
{

int Num1, Num2, GCD; printf("Enter Number1 = "); scanf("%d", &Num1); printf("Enter Number2 = "); scanf("%d", &Num2); while(Num1%Num2!=0)
{

GCD=Num1%Num2;
Num1=Num2; Num2=GCD;
}

printf("GCD number is : %d\n", Temp); return 0;
}

28.	Write a program that read two numbers and print its Greatest Common Divisor (GCD or HCF).
#include<stdio.h> int main(void)
{

int Num1, Num2, i, GCD; printf("Enter Number1 = ");

113
 
scanf("%d", &Num1); printf("Enter Number2 = "); scanf("%d", &Num2);
printf("\n");
for(i=1 ; i<= Num1 || i<= Num2 ; i++)
{

if(Num1%i==0 && Num2%i==0) GCD = i;
}

printf("GCD number is : %d\n", GCD); return 0;
}

29.	Write a program that read two numbers and print its Greatest Common Divisor (GCD or HCF).
#include<stdio.h> int main(void)
{

int Num1, Num2, i, Minimum, GCD; printf("Enter Number1 = "); scanf("%d", &Num1);
printf("Enter Number2 = "); scanf("%d", &Num2);
Minimum=(Num1>Num2)?Num2:Num1;

114
 
printf("\n"); for(i=Minimum ; i>=1 ; --i)
{

if(Num1%i==0 && Num2%i==0)
{

GCD=i;
break;
}
}

printf("GCD number is : %d\n", GCD); return 0;
}

30.	Write a program that read two numbers and print its Greatest Common Divisor (GCD or HCF).
#include<stdio.h> int main()
{
int num1,num2;
printf("Enter two integers: "); scanf("%d %d",&num1,&num2);
printf("HCF of %d and %d is ",num1 , num2); while(num1!=num2)
{
 




}
115
 
if(num1>num2) num1-=num2;
else
num2-=num1;
 
printf("%d",num1); return 0;
}



31.	Write a program that read two numbers and print its Least Common Multiple (LCM) in the following formula : LCM
= (Num1*Num2)/GCD.
#include<stdio.h> int main()
{

int Num1,Num2,Temp1,Temp2; printf("Enter Number1 : "); scanf("%d",&Num1); printf("Enter Number2 : "); scanf("%d",&Num2); Temp1=Num1;
Temp2=Num2; while(Temp1!=Temp2)
{

if(Temp1>Temp2) Temp1-=Temp2;
else
Temp2-=Temp1;
}

116
 
printf("LCM of two numbers %d and %d is %d", Num1, Num2, (Num1*Num2)/Temp1);
return 0;

}
32.	Write a program that read two numbers (X, Y) and display XY without using building function.
#include<stdio.h> int main(void)
{

int X, Y, P=1, i; printf("Enter X = "); scanf("%d", &X); printf("Enter Y = "); scanf("%d", &Y); for(i=1 ; i<=Y ; ++i)
P=P*X;



printf("%d to the power %d is : %d\n", X, Y, P); return 0;
}

33.	Write	a	program	that	read	two	numbers	(n,	r)	and display nPr (Permutation).
#include<stdio.h>


117
 
int main(void)
{

int n, r, i; long p;
printf("Enter n = "); scanf("%d", &n); printf("Enter r = "); scanf("%d", &r);


p=1;
for(i=r+1; i<=n ; ++i) p=p*i;
printf("\nnPr = %ld\n", p); return 0;
}

34.	Write	a	program	that	read	two	numbers	(n,	r)	and display nPr (Permutation).
#include<stdio.h> int main(void)
{

int n, r, i; long p;
printf("Enter n = ");

118
 
scanf("%d", &n); printf("Enter r = "); scanf("%d", &r); for(p=1,i=r+1; i<=n ; ++i)
p=p*i;
printf("\nnPr = %ld\n", p); return 0;
}

35.	Write	a	program	that	read	two	numbers	(n,	r)	and display nCr (Combination).
#include<stdio.h> int main(void)
{

int n, r, i; long c;
printf("Enter n = "); scanf("%d", &n); printf("Enter r = "); scanf("%d", &r); for(c=1,i=1; i<=r ; ++i)
c=c*(n-i+1)/i; printf("\nnCr = %ld\n", c); return 0;

 
 
}
36.	Write	a	program	that	read	two	numbers	(n,	r)	and display nCr (Combination).
#include<stdio.h> int main(void)
{

int n, r, i; long c;
printf("Enter n = "); scanf("%d", &n); printf("Enter r = "); scanf("%d", &r); if(c-r<r)
r=n-r;
for(c=1,i=1; i<=r ; ++i) c=c*(n-i+1)/i;
printf("\nnCr = %ld\n", c); return 0;
}

Some Important Home Works For You!!!


1.	Write a program that print all Even numbers from M to N (M>N).
 
 
2.	Write a program that print all Odd numbers from M to
N (M>N).

3.	Write a program that print all prime numbers from M to N (M>N).
4.	Write a program that print all prime numbers from M to N (M>N).
5.	Write a program that read Sum of first N Even numbers.


	Series
•	1+2+3+4+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;

printf("How Many Number : ");


 
scanf("%d", &N);



for(i=1 ; i<=N ; ++i) Sum=Sum+i;
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}

•	2+4+6+8+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);


for(i=1 ; i<=N ; ++i) Sum=Sum+2*i;
printf("Upto %d^th number's Sum is : %d\n", N, Sum);


 
 
return 0;

}

•	1+3+5+7+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);


for(i=1 ; i<=N ; ++i) Sum=Sum+2*i-1;
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}

•	4+12+20+28+…………………… upto Nth term.

#include<stdio.h> int main(void)
 
 
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);


for(i=1 ; i<=N ; ++i) Sum=Sum+8*i-1;
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}

•	2+5+8+11+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);



 
 
for(i=1 ; i<=N ; ++i) Sum=Sum+3*i-1;
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}

•	1.2+2.3+3.4+4.5+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);


for(i=1 ; i<=N ; ++i) Sum=Sum+i*(i+1);
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}


 
 
•	2.1+5.3+8.5+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);


for(i=1 ; i<=N ; ++i) Sum=Sum+(3*i-1)*(2*i-1);
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}

•	1.22+2.33+3.42+…………………… upto Nth term.

#include<stdio.h> int main(void)
{

int i, N, Sum=0;
 
printf("How Many Number : "); scanf("%d", &N);


for(i=1 ; i<=N ; ++i) Sum=Sum+i*(i+1)*(i+1);
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}

•	1.2.3+2.3.4+3.4.5+…………………… upto Nth term.

#include<stdio.h> 
int main(void)
{

int i, N, Sum=0;

printf("How Many Number : "); scanf("%d", &N);

for(i=1 ; i<=N ; ++i) Sum=Sum+i*(i+1)*(i+2);
 
printf("Upto %d^th number's Sum is : %d\n", N, Sum); return 0;
}





Some Important Home Works For You!!!


1. 2.1+5.3+8.5+…………………… upto Nth term.

2. 2.1+5.3+8.5+…………………… upto Nth term.

3. 1.3+5.3+7.5+…………………… upto Nth term.

4. 12.22+22.33+32.42+…………………… upto Nth term.

5. 2.5.8+5.8.11+8.11.14+…………………… upto Nth term.

6. 5.6.7+6.7.8+7.8.9+…………………… upto Nth term.

7. 1.2.5.7+3.5.7.9+5.7.9.11+…………………… upto Nth term.

8. Write a program that print 1 to N Fibonacci series.

