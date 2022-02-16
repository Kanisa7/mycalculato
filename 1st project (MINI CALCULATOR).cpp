#include<iostream>  
#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
#include<stdlib.h> 
using namespace std;
void add();  
void sub(); 
void multi();  
void division();  
void sqr();  
void srt();
void pi();
void moddiv();
void power();
void factorials();
void factors();
void cubesrt();
void cube();  
void percentage();
void bin();
void octal();
void hexa();
void exit(); 
int main()  
{    
int opr;  
// display different operation of the calculator  
do  
{  
cout <<" \t \t \t \t \t \t ...WELCOME... "
       " \n \t \t \t \t \t \t \tTO"
       " \n \t \t \t \t \t \t KANISHKA's CALCULATOR"
    " \n \n \t \t \t \t \t PERFORM ANY OPERATION FROM THE GIVEN  "  
    "\n \n1 = Addition"  
    "\t \t \t2 = Subtraction"  
    "\t \t \t3 = Multiplication"  
    "\n4 = Division"  
    "\t \t \t5 = Square"  
    "\t \t \t6 = Square Root"  
	"\t \t \t7 = pi"
	"\n8 = modular division"
	"\t \t 9 = power"
	"\t \t  \t10 = factorials"
	"\t \t \t11 = factors"
	"\n12 = cube square root "
	"\t \t 13 = Cubic form"
	"\t \t 14 = Binary form"
	" \t \t 15 = Octal form"
	" \n \t \t \t \t 16 = Hexadecimal form"
	"\t \t  17 = Percentage Calculation"
	"\n \n \t \t \t \t \t \t 18 = EXIT"
	"\n \n WHICH OPERATION IS NEEDED BY YOU: ";   
     cin >> opr;  
  
   switch (opr)  
     {  
     case 1:  
    add();  
    break;  
    case 2:  
    sub();     
    break;  
    case 3:  
    multi();  
    break;  
    case 4:  
    division(); 
    break;  
    case 5:  
    sqr(); 
    break;  
    case 6:  
    srt();  
    break;  
    case 7:
    pi();
    break;
    case 8:
    moddiv();
	break;
	case 9:
	power();
	break;
	case 10:
	factorials();
	break;
	case 11:
	factors();
	break;
	case 12:
	cubesrt();
	break;
	case 13 :
	cube();
	break;
	case 14:
	bin();
	break;
	case 15:
	octal();
	break;
	case 16:
	hexa();
	break;
	case 17:
	percentage();
	break;
	case 18:
	exit(0);
	break;
    default:  
    cout <<" \t \t OOPS!!! \t \tSomething is wrong..!!";  
    break;  
    }  
    cout <<" \n------------------------------------------------------------------------------------------------------------------------\n"; 
	cout<<" \t \t \t \t \t  \t THANK YOU  \n";
	cout<<"\t \t \t \t \t \t \t \t KANISHKA SARKAR";
	cout<<" \n------------------------------------------------------------------------------------------------------------------------\n"; 
    }while(opr != 7);  
    getch();  
    }  
  
void add()  
{  
float n, sum = 0, i, number;  
cout <<"How many numbers you want to add:  ";  
cin >> n;  
cout << "Please enter the number one by one:  \n";  
for (i = 1; i <= n; i++)  
{  
cin>>number; 
sum = sum + number;  
}  
cout << "\n Sum of the numbers =  "<< sum;  
}  
void sub()  
{  
float num1, num2, z;  
cout <<" \n Enter the First number =  ";  
cin >> num1;  
cout << "\n Enter the Second number =  ";  
cin >> num2;  
z = num1 - num2;  
cout <<"\n Subtraction of the number =  " << z;  
}  
void multi()  
{  
float num1, num2, mul;  
cout <<" \n Enter the First number =  ";  
cin >> num1;  
cout << "\n Enter the Second number =  ";  
cin >> num2;  
mul = num1 * num2;  
cout <<"\n Multiplication of two numbers =  " << mul;  
}  
void division()  
{  
float num1, num2, div = 0;  
cout <<" \n Enter the First number =  ";  
cin >> num1;  
cout << "\n Enter the Second number =  ";  
cin >> num2;  
while ( num2 == 0)  
     {  
     cout << "\n Divisor canot be zero"  
         "\n Please enter the divisor once again:  ";  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<"\n Division of two numbers =  " << div;  
}  
void sqr()  
{  
int num1;  
float sq;  
cout <<" \n Enter a number to find the Square:   ";  
cin >> num1;  
sq = num1 * num1;  
cout <<" \n Square of " << num1<< "is :  "<< sq;  
}  
void srt()  
{  
float q;  
int num1;  
cout << "\n Enter the number to find the Square Root: ";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Square Root of " << num1<< " is : "<< q;  
}
void pi()
{
float v;
float num1;
cout<<"\n Enter the number to find the pi value : ";
cin>>num1;
v = 3.14*num1;
cout<<"Pi value of"<< num1<<" is "<<v;
}
void moddiv()
{
float x,y;
int num1, num2 ;
cout<<"\n Enter the 1st number to find the modular division (Dividend):  ";
cin>>num1;
cout<<"\n Enter the 2nd number to find the modular division(Divisor) :  ";
cin>>num2;
x = num1%num2;
y= num1/num2;
cout<<"The quotient is "<<y;
cout<<"\nThe remainder is "<<x;
}
void power()
{
float num1,num2,result=1;
 cout<<"Enter a base number: ";
  cin>>num1; 
   printf("Enter an exponent: ");
   cin>>num2;
  result = pow(num1,num2);
  cout<< num1 << "^"<<num2<<" = "<<result;
}
void factorials()
{
int z, fact=1;
	long num1;
	cout<<"Enter a number : ";
	cin>>num1;
	for(z=1;z<=num1;z++)
	{
		fact=fact*z;
	}
	cout<<"The factorial is :  "<<fact;
}
void factors()
{
	int u,num1;
	cout<<"Enter a Number";
	cin>>num1;
	cout<<"The factors of "<<num1<<"are :";
	for(u=1;u<=num1;u++)
	{
		if(num1%u==0)
		cout<<"\t"<<u;
	}
}
void cubesrt()
{
float o;
float num1;  
cout << "\n Enter the number to find the cubeth Root: ";  
cin >> num1;  
o = cbrt(num1);	
cout <<" \n Cube th Root of " << num1<< " is : "<< o;
}
void cube()
{
float s, num1;
cout<<"Enter the number which you want to be in cubic form : ";
cin>>num1;
s = num1*num1*num1;
cout<<"The cubic form of "<<num1<<"is "<<s;
}
void percentage()
{
float p,num1,num2;
cout<<"Enter the number you get";
cin>>num1;
cout<<"Enter the full marks";
cin>>num2;
p = num1/num2 *100;
cout<<"Percentage of "<<num1<<"in "<<num2<<"is "<<p;
}
void bin()
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}
void octal()
{
 int rem, i = 1, num2 ;
int num1;
   cout << "Enter a decimal number: ";
   cin >> num1;
   while (num1!= 0)
    {
        rem =num1 % 8;
       num1 /= 8;
        num2  += rem * i;
        i *= 10;
    }
   cout<<"The octal expression is "<<num2;
}
void hexa()
{
int num1, rem, i=0;
    char num2[50];
    cout<<"Enter the Decimal Number: ";
    cin>>num1;
    while(num1!=0)
    {
        rem = num1%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        num2[i] = rem;
        i++;
        num1 =num1/16;
    }
    cout<<"\nEquivalent Hexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<num2[i];
    cout<<endl;
}
