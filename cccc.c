/* revision 
  hardware: it is a physical component eg:montior keyboard,mouse,cpu
  software  : it is a set of instruction that tells a software what to do eg:. exe,doc,pdf
  firmware : it is a softw3are that is embeded in a hardware device eg:.bios,embede sysrtem 
  opreating system :it is a system software that manages computeer hardware and software resource eg:. windoows ,linux, mac,os
  input and out formated : printf () and scanf()
  software :. it is a set of instruction that tells a computer whhat to do 
  program :. it is  a set of statements instructions that runs under the software 
  binary :. there are only two numbers or digits 0 , 1 where a computer understand the language 
  source code : it is a high level language that a computer user can understand :>eg c, cpp, js etc
  compiler : it ia a program that translate source code into binary language 
  interpiter:> it is program that transalte line by line to amnd much slower than a compiler
  algorithim :. it is a step by step problem solving  procedure
  cpu :. central processing unit 
  ram :. random acces memory it has also speed and voltaliy 
  rom read only memory 
  bit is the smallst of the memorrrrry unit
  byte is a group of 8 bits 
  kb is a kilobyte 1024 bytes 
  nibble is a group of 4 bits                   
     escape  sequences :. { \n  \t  \\  \'  \"  \?  \r  \b  \a  \v  \0  }
     multiple comment and single comment :. /*.....*, //.... 
     data type : is a type of data that a variable can hold 
     2 categories of data type : primitive and non primitive data type 
        primitive data type : int , char , float , double , void
        non primitive data type : array , structure , union , enum , pointer
        variable : is a name given to a memory location to store data
        constant : is a value that cannot be changed during the execution of a program
        literal : is a fixed value that is directly written in the code
        integer data type : is a data type that holds whole numbers
        floating point data type : is a data type that holds decimal numbers
         character  data type : is a data type that holds single characters
         void data type : is a data type that represents no value
         how to declare a variable : data_type variable_name;
          in ram there are code stack and code segment
          code segment : it is a part of ram that stores the code of the program
            stack segment : it is a part of ram that stores the variables and function calls
            resister : it is a small storage location in the cpu that holds data temporarily
            console : it is a text based interface that allows user to interact with the computer
            when we declare a name for a given data type in it goes and a declare a place or reserve a place for that data ttype in the ram
            nested assignment : is an assignment where a variable is assigned the value of another variable
            eg: int a, b, c;
                a = b = c = 10;
                dynamic and static memory allocation :
                dynamic memory allocation : is a memory allocation that is done at runtime using functions like malloc(), calloc(), realloc(), free()
                static memory allocation : is a memory allocation that is done at compile time using variables declared in the code 
                float:.%f
                double : %lf
                type casting : is a process of converting one data type to another data type
                truncketing : is a process of removing the decimal part of a floating point number
                opreators : are symbols that perform operations on variables and values
                arithmetic opreators : +, -, *, /, %
                relational opreators : ==, !=, >, <, >=, <=
                logical opreators : &&, ||, !
                modulus opreator : % it gives the remainder of a division operation
                mathematical functions : are functions that perform mathematical operations
                eg: sqrt(), pow(), ceil(), floor(), round(), fabs()
                urnary and binary ternary opretors : hey are the nature of an oprator based on the number of operands it works on
                   increment and decrement opreators : ++, --
                           prefix and postfix : they are two different ways of using the increment and decrement operators
                             eg: int a = 5;
                                 int b = ++a; // prefix
                                 int c = a++; // postfix
                                 integer and it types : they are data types that hold whole numbers
                                    signed and unsigned : they are two different ways of representing integer values
                                    eg: signed int can hold both positive and negative values while unsigned int can only hold positive values
                                    floating point types : they are data types that hold decimal numbers
                                       */
// program to  print a tabular column format uisng escape sequences
 #include <stdio.h>
int main() {
 printf("Name\tAge\tGrade\n");
printf("Alice\t20\tA\n");
 printf("Bob\t22\tB\n");
 printf("Charlie\t19\tC\n");

 return 0;

}
// progarm to print meassage by using end line \n escape sequence
#include <stdio.h>
 int main() 
 {
    printf("Hello, World!\n");
    printf("Welcome to C programming.\n");

   return 0;

 }
 // write a program by using integer difeerent types
 #include <stdio.h>
int main() 
{
int a = 10; // regular integer
short int b = 20; // short integer
long int c = 30000; // long integer
unsigned int d = 40; // unsigned integer

    printf("Regular Integer: %d\n", a);
      printf("Short Integer: %d\n", b);
        printf("Long Integer: %ld\n", c);
         printf("Unsigned Integer: %u\n", d);

 return 0;
 }
 // write a program to identify the data type signed and unsigned
 #include <stdio.h>
 int main() {
 signed int a = -10; // signed integer
  unsigned int b = 20; // unsigned integer

 printf("Signed Integer: %d\n", a);
 printf("Unsigned Integer: %u\n", b);

  return 0;
 }
// write a program to identify the floating point types
#include <stdio.h>
 int main()
  {
     float a = 10.5f; // float
      double b = 20.99; // double
      long double c = 30.123456789; // long double

        printf("Float: %.2f\n", a);
        printf("Double: %.5lf\n", b);
         printf("Long Double: %.10Lf\n", c);

return 0;
}
// write a program to demonstrate type casting and truncating
#include <stdio.h>
 int main()
  {
     float a = 10.75f;
     int b; // Type casting
    b = (int)a; // converting float to int

        printf("Original Float: %.2f\n", a);
        printf("After Type Casting to Int: %d\n", b);

 return 0;
 }
 // write a program to demonstrate arithmetic operators
 #include <stdio.h>
int main()
 {
    int a = 10, b = 5;

     printf("Addition: %d\n", a + b);
     printf("Subtraction: %d\n", a - b);
     printf("Multiplication: %d\n", a * b);
     printf("Division: %d\n", a / b);
     printf("Modulus: %d\n", a % b);

return 0;
 }
// write a program to demonstrate relational operators
#include <stdio.h>
int main() 
{
     int a = 10, b = 5;

    printf("Equal to: %d\n", a == b);
    printf("Not equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less than: %d\n", a < b);
    printf("Greater than or equal to: %d\n", a >= b);
    printf("Less than or equal to: %d\n", a <= b);

return 0;
}
// write a program to demonstrate logical operators
 #include <stdio.h>
int main() 
{
    int a = 10, b = 5;

    printf("Logical AND: %d\n", (a > 0 && b > 0));
     printf("Logical OR: %d\n", (a > 0 || b < 0));
     printf("Logical NOT: %d\n", !(a > 0));

return 0;
}
// write a program to demonstrate increment and decrement operators
#include <stdio.h>
 int main()
  {
    int a = 5;
    printf("Original Value: %d\n", a);
    printf("Prefix Increment: %d\n", ++a);
    printf("Postfix Increment: %d\n", a++);
     printf("Value after Postfix Increment: %d\n", a);
     printf("Prefix Decrement: %d\n", --a);
    printf("Postfix Decrement: %d\n", a--);
    printf("Value after Postfix Decrement: %d\n", a);

 return 0 ;
 }
// write a program to demonstrate mathematical functions
#include <stdio.h>
#include <math.h>
int main()
 {
    double num = 9.0;
    printf("Square Root of %.2f: %.2f\n", num, sqrt(num));
    printf("Power of %.2f^%.2f: %.2f\n", num, 2.0, pow(num, 2.0));
    printf("Ceiling of %.2f: %.2f\n", 4.3, ceil(4.3));
    printf("Floor of %.2f: %.2f\n", 4.7, floor(4.7));
    printf("Round of %.2f: %.2f\n", 4.5, round(4.5));
    printf("Absolute value of %.2f: %.2f\n", -5.5, fabs(-5.5));

return 0;
}
// write a program to demonstrate unary and binary operators
 #include <stdio.h>
int main()
{
int a = 10, b = 5;
// Unary operator
   printf("Unary Minus: %d\n", -a);// Binary operator
     printf("Binary Addition: %d\n", a + b);
return 0;



            }
            // write a program to demonstrate prefix and postfix increment/decrement
            #include <stdio.h>
            int main() {
                int a = 5;
                printf("Original Value: %d\n", a);
                printf("Prefix Increment: %d\n", ++a);
                printf("Postfix Increment: %d\n", a++);
                printf("Value after Postfix Increment: %d\n", a);
                printf("Prefix Decrement: %d\n", --a);
                printf("Postfix Decrement: %d\n", a--);
                printf("Value after Postfix Decrement: %d\n", a);
                return 0;
            }
            // write a program to demonstrate signed and unsigned integers
            #include <stdio.h>
            int main() {
                signed int a = -10; // signed integer
                unsigned int b = 20; // unsigned integer

                printf("Signed Integer: %d\n", a);
                printf("Unsigned Integer: %u\n", b);

                return 0;
            }
            // write a program to demonstrate floating point types
            #include <stdio.h>
            int main() {
                float a = 10.5f; // float
                double b = 20.99; // double
                long double c = 30.123456789; // long double

                printf("Float: %.2f\n", a);
                printf("Double: %.5lf\n", b);
                printf("Long Double: %.10Lf\n", c);

                return 0;
            }
            // write a c program to see the conditonal oprator 
            #include <stdio.h>
            int main()
            {
                float age=18;
                printf(" enter your age :");
                scanf("%f",age);
                age>=18 ? printf("you are eligible for voteing") : printf("you are not eligible for voting");
                return 0;

            }
            // write a program to know whether the person is teenaeger or not 
            #include<stdio.h>
            int main()
            {
                int age ,teenager,not_teenager;
                printf(" Enter your age:");
                scanf("%d",&age);
                age>=13 && age >=19 ? printf("teenager") :printf(" not a teenager ");
                return 0;

            }           
            //write a program using boolean algebra 
            #include <stdio.h>
            int main() {
                int A, B;
                printf("Enter value for A (0 or 1): ");
                scanf("%d", &A);
                printf("Enter value for B (0 or 1): ");
                scanf("%d", &B);

                printf("A AND B: %d\n", A && B);
                printf("A OR B: %d\n", A || B);
                printf("NOT A: %d\n", !A);
                printf("NOT B: %d\n", !B);

                return 0;
            }
            // program to convert decimal to binary 
            #include<stdio.h>
            #include<conio.h>
            void main()
            {
                 int n, rem;
                 clrscr();
                 printf("ennter the number \n;");
                 do
                 {
                    rem=n%2;
                    printf("%d",rem);
                    n=n/2;
                 } 
                 while (n>0);
                 getch();
                }
                //program to find individual dgits of a given fnctions
                #include<stdio.h>
                #include<conio.h>
                void main()
                {
                    int n,rem,sum=0;
                    clrscr();
                    printf("enter the number\n");
                    do
                    {
                      rem=n%10;
                      sum=sum+rem;
                      n=n/10;
                    }
                    while (n>0);
                      printf("sum of individual digits of number=%d",sum);
                        getch();
                    }
                    //program to find the factorial of a number 
                    #include<stdio.h>
                    #include<conio.h>
                    void main()
                    {
                        int n,i,fact;
                        clrscr();
                        printf("enter a positive number :");
                    scanf("%d",&n);
                    i=n;
                    fact=1;
                    do
                    {
                       fact*=n;
                       n--;
                        /* code */
                    } while (n>1);;
                    printf("\n factorial of 5d=%d\n",i,fact);
                    getch();
                    }  
                    
                // program to input N numbers conduct a linera search for a given key number and report succes or failure 
                #include<stdio.h>
                #include<conio.h>

                void main()
                {
                     int array[10];
                     int i,n,keynum,found=0;

                     clrscr();

                     printf(" Enter the value of N\n");
                     scanf("%d",&n);

                     printf(" Enter the elements one by one\n");
                     for(i=0; i<n; i++)
                     {
                        scanf("%d",&array[i]);
                     }
                     printf(" Input array is\n");
                     for ( i=0; i<n; i++)
                    {
                        printf("%d\n",array[i]);
                    } 
                    printf(" enter the element to be searched\n");
                    scanf("%d",&keynum);
                    for (i=0; i<n; i++)
                    {
                        if (keynum == array[i]);
                        {
                            found=1;
                            break;
                        }
                    }
                    if (found==1)
                    {
                        printf(" element %d found at position %d\n",keynum,i+1);
                    }
                    else
                    {
                        printf(" element %d not found in the array\n",keynum);
                    }
                            


                }
                //program to sort the array in asecending order 
                #include<stdio.h>
                #include<conio.h>

                void main()
                {
                    int n,a[10],i,j,t;
                    clrscr();

                    printf("Enter the size of an array \n:");
                    scanf("%d",&n);;

                    printf(" Enter the elements of an array \n:");

                    for(i=1;i<=n;i++)
                    {
                        for(j=i+1;j<=n;j++)
                        {
                            if (a[i]>a[j])
                            {
                                t=a[i];
                                a[i]=a[j];
                                a[j]=t;
                            }
                        }
                }
                
                printf(" sorted array in ascending order \n:");
                    for (i=1;i<=n;i++)
                    {
                        printf("%d\n",a[i]);
                    }
                    getch();
                }
                // write a c program to find the largest weights average min,max., babies,weight array
                #include<stdio.h>
                #include<conio.h>
                void main()
                {
                    int n,i,max,min,sum=0;
                    float avg;
                    int weight[10];
                    clrscr();
                    printf(" enter the number of babies \n:");
                    scanf("%d",&n);
                    printf(" enter the weights of babies \n:");
                    for (i=0;i<n;i++)
                    {
                        scanf("%d",&weight[i]);
                    }
                    max=min=weight[0];
                    for (i=0;i<n;i++)
                    {
                        if (weight[i]>max)
                        {
                            max=weight[i];
                        }
                        if (weight[i]<min)
                        {
                            min=weight[i];
                        }
                        sum=sum+weight[i];
                    }
                    avg=(float)sum/n;
                    printf(" maximum weight=%d\n",max);
                    printf(" minimum weight=%d\n",min);
                    printf(" average weight=%.2f\n",avg);
                    getch();
                }
                //write a c program to find the sum of teo square matrices 
                #include<stdio.h>
                #include<conio.h>
                void main()

                {
                    int mat1[10] [10],mat2[10] [10],sum[10] [10];
                    int m,n,i,j;
                    clrscr();
                    printf(" enter the order of the matrix ");
                    scanf("%d%d",&m,&n);

                    if(m!=n)
                    {
                        printf("matrix addition  not possible\n");
                    }
                    else 
                    {
                        printf("enter the elements of the 1st matrix ");
                        for (i=0;i<m;i++)
                        for(j=0;j<n;j++)
                        sacnf("%d",&mat1[i][j]);
                        printf(" enter the elements of the 2nd matrix ");
                        for (i=0;i<m;i++)
                        for (j=0;j<n;j++)
                        scanf("%d",&mat2[i][j]);
                        for (i=0;i<m;i++)
                        for (j=0;j<n;j++)
                        sum[i] [j]=mat1[i][j]+mat2[i][j];
                        printf(" sum of the two matrices is \n");
                        for (i=0;i<m;i++)
                        {
                            for (j=0;j<n;j++)
                            {
                                printf("%d\t",sum[i][j]);
                            }
                            printf("\n");
                        }
                    }
                    getch();
                }
                

//practice end <:>
/* decision making and branching :- 
1. simple if statement 
2.if else statement
3.nested if else statement 
4.else if lader 
5.switch statement statement ..........!
what is if else statement ?  it is called conditional statement 
 ?*/               
                 // using condtiotional opretor  eg:. as " if else " eg
                 // write  a c program to check wheter if the angles of an triangle is valid or not  
                 # include<stdio.h>
                 int main()
                 {
                    int a1,a2,a3,sum;
                    printf("enter the three angles of triangle to check :");
                    scanf("%d%d%d",&a1,&a2,&a3);
                    sum=a1+a2+a3;
                    if(sum==180)
                    {
                        printf("the triangle is valid \n");

                    }
                    else
                    {
                        printf("the triangle is invalid\n");

                    }
                    return 0;

                }
                // write a c [rogram to check the number is postive or negative 
                #include<stdio.h>
                int main()
                {
                    int n;
                    printf(" enter an  integer ");
                    scanf("%d",&n);
                    if(n>0)
                    {
                        printf("the number ispositive\n");

                    }
                    else 
                    {
                        printf("the number is negative\n");

                    }
                     return 0;
                }
                // write a c program to see weather the age is eligible or not for vote
                #include<stdio.h>
                int main()
                    {
                        int age;
                        printf(" enter you age:");
                        scanf("%d",&age);
                        if(age>=18)
                        {
                            printf("you are eligbile for vote ");


                        }
                        else 
                        {
                            printf("you are not eligible for vote ");

                        }
                        return 0;
 
                        }
                        //write a c program to caLCULATE TAX BASED ON INCOME
                        #include<stdio.h>
                        int main()
                        {
                            float income,tax;
                            printf("enter your income:");
                            scanf("%f",&income);

                            if(income<=250000)
                            {
                                tax=0;
                                printf(" tax amount is :%.2f\n",tax);
                            }
                            else if(income<=500000)
                            {
                               tax=0.05*(income-250000);
                               printf(" tax amount is :%.2f\n",tax);
                            }
                            else if(income<=1000000)
                            {
                                
                                tax=0.2*(income-500000)+12500;
                                printf(" tax amount is :%.2f\n",tax);
                            }
                            else
                            {

                        
                                tax=0.3*(income-1000000)+112500;
                                printf(" tax amount is :%.2f\n",tax);


                            }
                            return 0;
                        }
                        // tax  from capilot
                        #include <stdio.h>

int main() {
    float income, tax = 0;

    // Input income
    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Tax calculation based on slabs
    if (income <= 250000) 
    {
        tax = 0;
    } 
    else if (income <= 500000)
     {
        tax = (income - 250000) * 0.05;
    }
     else if (income <= 1000000)
      {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    } 
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }

    // Output tax
    printf("Your calculated tax is: ₹%.2f\n", tax);

    return 0;
}
// program to find weather it the given yeyar is leap year not
#include<stdio.h>
int main()
{
    int year;
    printf(" enter the year:");
    scanf("%d",&year);
    if ((year%4==0))
    {
        printf("the year is leap year \n");

    }
    else{
        printf(" the year is not a leap year\n");

    }
    getch();

}
//write a c program to find the biggest of three numberrs
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf(" enter the 3 numbers:");
    scanf("%d%d%d",a,b,c);
    if (a>b)
    {
        if(a>c)
        {
            printf("a is the biggest number\n");
        }
        else
        {
            printf("c is te greatest among the numbers\n");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is the biggest number\n");
        }
        else
        {
            printf("c is the biggest number\n");
        }


    
    }
}

// writet a c program   tofind greates of three numbers 
#include<stdio.h>
int main()
{
    int a,b,c;
        
      printf("enter 3 nummbers:");
      scanf("%d%d%d",&a,&b,&c);
           
       if(a>b)
       {
           if(a>c)
           {
                printf (" a is the greatest");
           }
           else
           {
                printf("c is greatest");
           }

        }
      else
       {
        if(b>c)
        {
            printf("b is the greatest");
        }
        else
        {
            printf("c is geatest");
        }
      }  
     }


 // write a c program to see wehter the angkle is actue right or obtuse
 
 #include<stdio.h>
 int main()

 {
    int a1,a2,a3;

       printf("enter the 3 angles :");
       scanf("%d%d%d",&a1,&a2,&a3);

       if(a1+a2+a3==180)

       {
        if(a1,a2,a3>90)
        {
            printf("acute angel");
        }
        else if(a1==90 || a2==90 || a3==90)
        {
            printf("right angle");
        }
        else
        {
            printf("obtuse angle");
        }
       }

      else 
      {

         printf("invalid angles");

      }

 }
  //switch statement
// write A menu driven program  
/* 
switch statement ? 
 where we use multiple options where we get multiple  task in the same program       
 2. it test  the values of a variable or expression (1) (expression[res])-->  against the given list of case values  || when it matches the given task for the particular case will be executed 
  rules for switch statement 
  1. each case value be unique within a switch statement for execution 
  2. case lables should not be FLOAT values or  BOOLEAN NUMBERS .
  3. each case label should have one case colon (  : )
  4. a gap should be there between case and the given (variables /expression)
  5. a case lables should be lllllisted in curvey braces
  6. break should be there after each case ; it controls the flow of the case statement 
  7. switch statement should have only one deaufault statement 
  */
   //  write a c program on  menu driven program on to express the arithimetic opreations
      
//  write a c program on  menu driven program on to express the arithimetic opreations
#include<stdio.h>
   int main()
   {
     // (1.add,2.sub,3.mult,4.div)
    int choice;
     printf("1.add\n2.sub\n3.mult\n4.div\n Enter your choice\n");
     scanf("%d",&choice);

     switch(choice)
     {

        case 1:
        {
              int n1,n2,add;
            printf("enter the integers :\n");
            scanf("%d%d",&n1,&n2);

             add = n1+n2;
             printf("add=%d",&add);
        }
            break;


        case 2:
        {
              int n1,n2,sub;
            printf("enter the integers");
            scanf("%d%d",&n1,&n2);

             sub = n1-n2;
             printf("sub=%d",&sub);
        }
            break;

         case 3:
        {
              int n1,n2,mult;
            printf("enter the integers");
            scanf("%d%d",&n1,&n2);

             mult = n1*n2;
             printf("mult=%d",&mult);
        }
            break;

         case 4:
        {
              int n1,n2;
              float div;
            printf("enter the integers :");
            scanf("%d%d",&n1,&n2);

             div=n1/(float)n2;
             printf("div=%.2f",&div);     
        }
            break;
            default:
            printf("invalid choice!\n");
     } 
   }
/*                                                                 LOOPS
these are much easiear than if else (dmb) beacause overe here the user cant write the condtion aagin and again 
if the condtion is wrong it wont execute by the cpu and if yes it will se wheter it is equal to the given contion and then it will executes in th consaole area .
 as we know th control and uses of loops .
cpu doesnot undersrtands wheere to stop and how much times /digits/count it should be decreased or increased  so we use the counter variable (i/j/n) to show that this variable will be inc &dec 
as we t he condtions lets go with syntax by the following different types of loops 
           for(expression1;condition;expression2)
           {
                statement;  
           }
  overe here the exp! :- we need to declare the counter  variable (i/j/n or any variable ) and then the cpu will initilize it 
  conditon :- over here if we declare something we need to know where to stop so it meand it is a condtion that cpu got 
  exp:- as we know the condtion but cpu doesnot understand wheather to be in&dec or whatever .
  so we tell the cpu to do that task  by the given expreesion (i=1+2 / 1++ /1-- )
  so here the cpu understand that the given condtion should be expreesed by the given exp2! by the user and it will give the output as per the condtion is true or false 

why we use loops ? :  to perform task repetedily in the program by using single line of code 
for loop 
while loop 
do while loop 


1: FOR LOOP:- HERE THE USER KNOWS THE that how many times the statement should be repeated and displayed 
         SYNTAX:
         for(expression1;condition;expression2)
           {
                statement;  
           }
  overe here the exp! :- we need to declare the variable (i/j/n or any variable ) and then the cpu will initilize it 
  conditon :- over here if we declare something we need to know where to stop so it meand it is a condtion that cpu got 
  exp:- as we know the condtion but cpu doesnot understand wheather to be in&dec or whatever .
  so we tell the cpu to do that task  by the given expreesion (i=1+2 / 1++ /1-- )
  so here the cpu understand that the given condtion should be expreesed by the given exp2! by the user and it will give the output as per the condtion is true or false 
 there are three types of loops as given above..................!
*/
// FOR LOOP EG
// write a c program to print the series of numbers by using for loop 
#include<stdio.h>
int main()
{
    int term,terms;

    printf("enter the number of terms :");
    scanf("%d",terms);

    for(int i=1;i<=terms;i++)
    {
        printf("%d",i);
    }
    return 0;
}
 // write a c program to print the series of even numbers 
 #include<stdio.h>
 int main()
{
    int terms,term;

    printf(" enter the  terms :");
    scanf("%d",&terms);

    for(int j=0;j<=terms;j=j+2)
    {
        printf(" %d",j);
    }
return 0;
}
// write a c program to print the series of even numbers
 #include<stdio.h>
 int main()
{
    int terms,term;

    printf(" enter the  terms :");
    scanf("%d",&terms);

    for(int j=2;j<=terms;j++)
    {
        if(j%2==0)
        printf(" %d",j);
    }
return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//assignment 31 jan
/*
A1: IF STATEMENT- NUMBER CLASSIFICATION 
A2 : IF STATEMENT- STUDENT GRADE 
A3 : SWITCH CASE-SIMPLE CALCULATOR
A4 : SWITCH CASE-OF WEEK
A5 : SWITCH CASE- Electricity Bill
*/
// WRITE A C PROGRAM TO READ AN INTIGER AND DETERMINE WHETHER THE NUMBER IS •PositiveNegativE Zero  Use if–else if–else
#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer :");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("positive number");
    }
        else
        {
             printf("negative number");
        }
    
    return 0;
}
// write a c program to calculate student grade using if else 
#include<stdio.h>
int main()
{
    float grade,marks;
    printf("enter your marks");
    scanf("%f",marks);

    if(marks>=90 && marks>=80)
    {
        printf("grade A++");
    }
    else if(marks>=80&& marks>=70)
    {
        printf("grade A");
    }
    else if(marks>=70&& marks>=60)
    {
        printf("grade B");
    }
    else if(marks>=60&& marks>=50)
    {
        printf("grade C");
    }
    else if(marks>=50 && marks>=40)
    {
        printf("grade D");
    }
    else if(marks<=30)
    {
        printf("FAIL");
    }
    else 
    {
        printf("error invalid input");
    }
    return 0;

}
// write a c program by using switch case -calculator
#include<stdio.h>
int main()
{
    float n1,n2,result;
    int opt_on;
    printf("enter your option:\nadd\nsub\nmul\ndiv:");
       scanf("%d",&opt_on);

    switch (opt_on)
    {
        case 1:
        {
            printf("enter two integer:");
            scanf("%f",&n1,&n2);
      result = n1+n2;
            printf("sum=%f",result);
        }
        break;
         case 2:
        {
            printf("enter two integer:");
            scanf("%f",&n1,&n2);
      result = n1-n2;
            printf("sum=%f",result);
        }
        break;
        
         case 3:
        {
            printf("enter two integer:");
            scanf("%f",&n1,&n2);
      result = n1*n2;
            printf("result=%f",result);
        }
        break;
        
         case 4:
        {
            printf("enter two integer:");
            scanf("%f",&n1,&n2);
      result = n1   / (float)n2 ;
            printf("sum=%f",result);
        }
        break;
    
 default:

    printf("enter error ms");
 }


return 0;

}
        #include<stdio.h>
int main()
{
    int day;
    printf("enter the number :");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            {
                 printf("monday");
            }
        break;
         case 2:
            {
                 printf("tuesday");
            }
        break;
         case 3:
            {
                 printf("wednesday");
            }
        break;
         case 4:
            {
                 printf("thrusday");
            }
        break;
         case 5:
            {
                 printf("friday");
            }
        break;
         case 6:
            {
                 printf("satruday");
            }
        break;
         case 7:
            {
                 printf("sunday");
            }
         default:
            printf("error");

    }


return 0;
}

// write a c program to read and calculate the electricity bill 
#include<stdio.h>
int main()
{
    int bill,units,choice,surcharge;

    printf("Enter units consumed");
    scanf("%d",&units);

    if(units>1 && units<=100)
    {
        bill = units * 1 ;
    }
    else if(units>=101 && units<=200)
    {
        bill = units * 2 ;
    }
    else if(units>=200)
    {
        bill = units * 3 ;
    }
       printf(" 1.domestic\n 2.commercial\n ENTER YOUR CHOICE : ");
       scanf("%d",choice);

    switch(choice)
    {
        case 1:
                { 
                    surcharge = 0;
                    break;
                }
        case 2:
               {
                surcharge = bill * 0.2;
                break;
               }        
    }
    int total_bill=bill+surcharge;

    printf("TOTALBILL :%d",total_bill);
    return 0;
}
 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//write a c program multipilcation of the table 
#include<stdio.h>
int main()
{
    int n;

    printf("enter an interger:");
    scanf("%d",&n);

    for(int i=1;1<=10;i++)
    {
        printf("%d\n",n*1);
    }
    return 0;
}
// write a c program to square the natural no.s 
#include<stdio.h>
int main()
{
    int terms,term;
    
    printf("enter an integer :");
    scanf("%d",&terms);
    for(int i=1;i<=terms;i++)
    {
        term = i*i;
        printf("%d\n",term);
    }
    return 0;
}
// write a c program for the series 0 3 8 15 24 35....n
#include<stdio.h>
int main()
{
    int terms,term;
     
    printf("enter an integer :");
    scanf("%d",&terms);

    for(int i=1;i<=terms;i++)
    {
        term = i*i-1;
        printf("%d",term);
    }
    return 0;
}
//write a c program for the given series 3 5 9 15 22 33...n
#include<stdio.h>
int main()
{
    int terms,term=3,diff=2;

    printf("enter the no of terms :");
    scanf("%d",&terms);

    for(int i=1;i<=terms;i++)
    {
        printf("%d",term);
        term=diff+term;
        diff=diff+2;
    }
    return 0;
}
//write a c program for the given no of series 1 2 4 8 16 32
#include<stdio.h>
int main()
{
    int terms,term;

    printf("enter number of terms :");
    scanf("%d",&terms);

    for( int i=2;i<=terms;i++)
    {
        term=i*2;
        printf("%d",term);
    }
    return 0;
}
//write a c program for the given series 0 1 1 2 3 5 8 13 21
#include<stdio.h>
int main()
{
    int terms;
    int first=0,second=1,third;
    printf("enter the no of terms :");
    scanf("%d",&terms);

    printf("%d %d ",first,second);

    for(int i=3;i<=terms;i++)
    {
        third=first+second;
        printf(" %d ",third);
        first=second;
        second=third;
    }
    return 0;
}
//find  the sum of the n TURAL NUMBER FROM 1 TO GIVEN NO. 
//S=S+i
#include <stdio.h>
int main()
{
int n,s=0;
printf("Enter an integer : ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
s = s + i;//s=1
}
printf("s = %d",s);
return 0;
}
// write a c program to calculate factorial of a given no.
#include <stdio.h>
int main()
{
    unsigned long long fact=1;
     int n;

     printf("enter the integer");
     scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
        fact=fact*i;
     }
     printf(" factorial of %d = %llu ",n,fact);
 return 0;
}
// write a cprogram to find sum of any 5integer enterd by the user
#include <stdio.h>
int main()
{
int n,s=0;
for(int i=1;i<=5;i++)
{
    printf("enter an integer :");
scanf("%d",&n);
   s=s+n;
}
printf("s = %d",s);
   return 0;
}

//write a c program to find wheter the given  no. is in fibonuicss series or not 
#include<stdio.h>
int main()
{

    int a,b,c,sum;
    int n;

    printf("enter an integer:");
    scanf("%d",&n);

    for(;;)
    {
        c=a+b;
        a=b;
        b=c;
             if(c==n)
             {
                  printf("is a fibonicss number");
                  break;
             }
             else if(c>n)
             {
                  printf("not a fibonicss number "); 
             }   
    }
  return 0;
}
//WRITE A C PROGRAM TO GENERATE THE FACTORS OF A GIVEN NUMBER AND PRINT IN THE CONSOLE 
#include<stdio.h>
int main()
{
    int n;
    int fact;

    printf("enter an integer :");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
       if( n % i == 0)
       {
        printf("%d",i);
       }
    }
}
// write a C PROGRAM TO FIND ALL THE FACTORS OF A GIVEN NUMBER
#include<stdio.h>
int main()
{
    int n;

    printf("enter an integer:");
    scanf("%d",&n);

    printf("1");

    for( int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }
    printf("%d",n);
    return 0;
}
// writte a c pprogram to find the common factors for a given no.
#include<stdio.h>
int main()
{
    int a,b,min;

    printf("enter 2 integer:");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        min=a;
    }
    else
    {
         min=b;    
    }
               for(int i;i<=min;i++)
               {
                   if(a%i==0 && b%i==0)
                   {
                       printf( "%d ",min);
                   }
               }
    return 0;
}

// write a c program to find the gcd o the two integers 
#include<stdio.h>
int main()
{
    int min,a,b,gcd;

    printf("enter 2 integers:");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }

    for(int i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }

    printf("gcd=%d",gcd);

 return 0;
}
//write a c program to find the lcm of ttwo given integers
#include<stdio.h>
int main()
{
    int a,b,min,gcd=1;
    float lcm;

    printf("enter 2 integers:");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }

    lcm=a*b/gcd;
    printf("lcm=%2.f",lcm);

return 0;
}
//write a c program to find whether the given no is prime no or not 
#include<stdio.h>
int main()
{
    int n,i;

    printf("enter a integer :");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        printf("%d is NOT A PRIME NO:.",n);
        break;
    }

    if(i=n/2+1)
    printf("%d is a PRIME NO:.",n);
    
    return 0;
}
//write a c program to check whehter the given no is prime or not by using flag
#include<stdio.h>
int main()
{
    int n,i,flag=0;

    printf("enter an integer :");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d IS NOT A PRIME NO:.",n);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("%d IS A PRIME NO:.",n);

    return 0;
}
//write a c program to count no of digits in a given no
#include<stdio.h>
int main()
{
    int n;
     int count=0;

    printf("enter an integer :");
    scanf("%d",&n);
     int temp=n;

    while(n!=0)
    {
        n=n/10;
         count++;
    }
    printf("count of digits in %d=%d",temp,count);

    return 0;   
}
//write a c program to count the digits by using cout
#include<stdio.h>
int main()
{
    int n;
    int count=0;

    printf("enter an integer :");
    scanf("%d",&n);

    printf("count of digits in %d=",n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    
    return 0;
}
// write a c program show first n last digit of a given no
#include<stdio.h>
int main()
{
    int n,first,last;
    int count=0;

    printf("enter an integer:");
    scanf("%d",&n);

    int temp=n;
    last=n%10;
    printf("last digit =%d\n",last);

    while(n>10)
    {
        n=n/10;
        count++;
    }
    printf("first digit=%d\n",n);

    return 0;
}
// write a c program  sum of digits of the given no
#include<stdio.h>
int main()
{
    int n,d,s=0;
    printf("enter an integer:");
    scanf("%d",&n);

    int temp=n;

    while(n!=10)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("s = %d",s);


return 0;
}
// write a c programs check if the given no is armstrong or not
#include<stdio.h>
int main()
{
    int n,d,s=0;

    printf("enter an no:>");
    scanf("%d",&n);

    int temp=n;

    while(n!=0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n%10;
    }
    if(temp==n)
    {
        printf("armstrong no:.");
    }
    else
    {
     printf(" not armstrong no:.");
    }
     return 0;
}
// write a c program to remove the 0 from the given no:.
#include<stdio.h>
int main()
{
    int n,d,s=0,p=0;

    printf("enter an integer :");
    scanf("%d",&n);

    while(n!=0)
    {
        d=n%10;

    if(d!=0)
    {
        s=s+d*pow(10,p++);
    }
    n=n/10;
    }
    printf("s=%d",s);
    return 0;
}
//write a c program duck number or not
#include<stdio.h>
int main()
{
    int n,d;

    printf("enter an integer :");
    scanf("%d",&n);

    int temp=n;

    while(temp!=0)
    {
        d=temp%10;

        if(d==0)
        {
            printf("DUCK NUMBER");
            break;
        }
       temp=temp/10;
    }
    if(temp==0)
    printf("NOT A DUCK NUMBER");

    return 0;
}   
//write a c program to check whetehr the given no is strong or not
#include<stdio.h>
int main()
{
    int n,d,s=0,fact;

    printf("enter an integer:");
    scanf("%d",&n);

    int temp=n;

    while(n!=0)
    {
        d=n%10;

        fact=1;

        for(int i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        s=s+fact;
        n=n/10;
    }
    if(temp==s)
    {
        printf("strong no");
    }
    else 
    {
        printf("not a strong no");
    }
    return 0;
}

/*write a c program to print the pattern 12345
                                         12345
                                         12345
                                         12345
                                         12345  */
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/* write a c program to print the pattern 1
                                          12
                                          123
                                          1234
                                          12345 */

 #include<stdio.h>
 int main()
 {
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",j);
        }
    printf("\n");
 }
 return 0;
}     
/* write a c program to print the pattern 1
                                          22
                                          333
                                          4444
                                          55555 */

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
// print all prime no in 1 to 100 nested loop 
#include<stdio.h>
int main()
{
    int  i,n=1,flag=0;

    while(n<=100)
    {

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {              
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d",n);
        n++;
    }
    return 0;
}
//DO WHILE LOOP 
//Do while ensures that the code of the loop block gets executed at least for one time.
//First iteration is fixed. Remaining iterations depends on condition
#include<stdio.h>
int main()
{
    int n,i;

    do
    {
      printf("hello world");
      n++;
    } 
    while (n<5);
    return 0;
}
// write a c program to print the area of radius  using do while loop
#include<stdio.h>
int main()
{
    int reply;
    float area,radius;

    do
    {
        printf("enter radius of circle :");
        scanf("%f",&radius);

        area = 3.14*radius*radius;

        printf("area of radius=%2.f",&area);

        printf("press 1 to continue 0 to stop");
        scanf("%d",&reply);
    }
    while(reply==1);
    return 0;
}
/* write a c program  for nested looping double and thrice  
                                                             1
                                                            1 2
                                                          1 2 3
                                                        1 2 3 4
                                                       1 2 3 4 5   #1:. */


#include<stdio.h>
int main()
{
    int i ,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++);
        {
            for(k=1;k<=5;k++)
            {
                printf("butter spread:");
            }
        }
    }
    return 0;
}
/* 1 2 3 4 5 
    1 2 3 4   
      1 2 3
       1 2
        1
 #2:. */
 #include<stdio.h>
 int main()
 {
    int i,k,j,n=0;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("");
        }
        for(k=1;k<=6-i;k++)
        {
            printf("%d  ",k);
        }
        printf("\n");
      
    }
}
//check if a no present in another no at the end automorphic no 
// an integer whose square value ;ends at its own no
#include<stdio.h>
int main()
{
    int n=15,sqr,res,p=10;
    sqr=n*n;
    while(1)
    {
     if(res==0)
     {
        printf("automorphic no");
        break;
     }
     else if(res>n)
     {
        printf("not an automorphic no");
        break;
     }
     p=p*10;
    }
    return 0;
}
//write a c program for neon no
#include<stdio.h>
int main()
{
    int n,s=0,r=0,sq,reply;

    do
    {
      printf("enter an integer:\n");
      scanf("%d",&n);

       sq=n*n;

      int temp=sq;
            
      while(temp>0)
        {
             r=temp%10;
             s=s+r;
             temp=temp/10;
        }

        if(s==n)
        {
            printf("neon no\n");      
        }
         else 
        {
            printf("not a neon number\n");
        }

        printf("enter 1 for continue 0 for stop:\n");
        scanf("%d",&reply);
    }
    while((reply==1));

    return 0;
}
//                                  ARRAY
// a collection of an element of same data type .stored in continues memory

// example
#include<stdio.h>
int main()
{
    int a[5]={1,23,33,43,5};

    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
     printf("%d\n",a[2]);
      printf("%d\n",a[3]);
       printf("%d\n",a[4]);
    
       return 0;
}
//intisilazing of an array in loop
#include<stdio.h>
int main()
{
    int a[5] = {12,2,34,56,76,65};

    int size=sizeof(a)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
// copying an array into another  array
#include<stdio.h>
int main()
{
    int a[5]={12,43,56,87,12};

    int size=sizeof(a)/sizeof(int);
    int b[size];

    for(int i=0;i<size;i++)
    {
        b[i]=a[i];
        printf("%d\n",b[i]);
    }
    return 0;
}
// copying all elements of array1 into array2 in reverse order
#include<stdio.h>
int main()
{
    int a[5]={32,43,65,78,95};

    int size=sizeof(a)/sizeof(int);

    int b[size];
    int n=size-1;

    for(int i=0;i<size;i++)
    {
        b[n--]=a[i];
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
//iniilising an empty array from the user & printing it 
#include<stdio.h>
int main()
{
    int a[5];
    int size=sizeof(a)/sizeof(int);
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
       printf("%d\n",a[i]);
    }
    return 0;
}
// summ of an array element
#include<stdio.h>
int main()
{
    int a[5]={12,43,56,87,21};
    int s=0;
    int size=sizeof(a)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        s=s+a[i];
    }
     printf(" sum of array elements %d ",s);
    return 0;
} 
//  print EVEN ELEMENTS of an array only
#include<stdio.h>
int main()
{
    int a[5]={1,2,4,7,8};
    int size=sizeof(a)/sizeof(int);
    int even;

    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("even elements %d ",a[i]);
        }
    }
    return 0;

}
// largest of an array element
#include<stdio.h>
int main()
{
    int a[5]={21,34,65,87,56};
    int size=sizeof(a)/sizeof(int);
    int max_ind;

    for(int i=0;i<size;i++)
    {
        if(a[max_ind]<a[i])
        {
            max_ind=i;
        }
    }
    printf("%d",a[max_ind]);
    return 0;
}
// swaping of an element in an array from ascending 
#include<stdio.h>
int main()
{
    int a[5]={21,34,65,12,5};
    int size=sizeof(a)/sizeof(int);
    int min_d,max_d,temp;

    for(int i=0;i<size;i++)
    {
        min_d=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[min_d]>a[j])
            {
                min_d=j;
            }
        }
        temp=a[i];
        a[i]=a[min_d];
        a[min_d]=temp;
    }
    for(int i=0;i<size;i++)
        printf("%d",a[i]);
    return 0;
}
//bubble sort  
#include<stdio.h>
int main()
{
    int a[5]={23,54,76,9,1};
    int size=sizeof(a)/sizeof(int);
    int temp;

    for(int i=0;i<size-1;i++)
    {
        for(int j=0;size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=1;i<size;i++)
    printf(" %d",a[i]);
    return 0;
}
//2D ARRAY
// WhICH CONTAINS ROWS AND COLUMNS YO STORE DATA FOR A PARTICULAR ROW // 5 STUDENTS 3 SUBJECTS 5 rows 3 c
// write a program to print the 2d array 
#include<stdio.h>
int main()
{
     int a[2][3]={{1,2,3,},{4,5,6}}; // print rows and col

     for( int i=0;i<2;i++)// for 2 rows it will end in 0 1 
     {
        for(int j=0;j<3;j++)// for 3 colums it will end in 012=3
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
     }
     return 0;
}
// APPLY FORMULA  and display rnc
#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{3,4,5}};

    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            prinf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// sum of all elements in array
#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{54,76,87}};
    int s=0;
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++);
        {
            s=s+a[i][j]; 
            printf("%d",s);
        }
    }
    return 0;
}
// sum of all elements in each row in array
#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{54,76,87}};
    int s=0;
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++);
        {
            s=s+a[i][j];         
        }
           printf("s=%d\n",s);
           s=0;
    }
    return 0;
}
// sum of each col
#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{54,76,87}};
    int s=0;
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    int i,j;
    for(j=0;j<c;j++)
    {
         s=0;
        for(i=0;i<r;i++)
        {
            s=s+a[j][i];         
        }
           printf("s=%d \n",j,s);
          
    }
    return 0;
}
// print major diagonal element square matrix
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{54,76,87},{43,65,87}};
    int s=0;
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    int i,j;
     for(j=0;j<c;j++)
     {
        print("%d",a[j][j]);
     }
     return 0;
}
// print minor diagonal element square matrix
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{54,76,87},{43,65,87}};
    int s=0;
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    int n=r-1,j;
     for(j=0;j<c;j++)
     {
        print("%d",a[j][n--]);
     }
     return 0;
}
// print major diagonal element square matrix
#include<stdio.h>
int main()
{
   int a[3][3]={{1,2,3},{54,76,87},{ 43,65,87}};
    int b[3][3]={{4,76,2,},{1,3,2},{ 1,9,0}};
    int s[3][3];
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    int i,j;
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
             printf("%d",s[i][j]);
        }
        printf("\n");
     }
     return 0;
    }
    //               MEMORY ADDRESS
    /* memory address  is a specific type of memory location  */ 
    
    // program to print the memory address of variable n
   #include<stdio.h>
int main()
{
    int n=10;

    printf("adress of n=%p",&n);// for hexa decimal & %d for decimal value

    return 0;
}
// now program to save this memory address of the variabe
#include<stdio.h>
int main()
{
    int n=10;
    unsigned long long int add_n=&n;

    printf(" addess of n=%d",&n);

    return 0;
}
/* a variable wont save the addres of a variable .hence, we use pointer

                POINTERS 

  it a special type of variable to store memory address  . of another variable instead of value

  SYNTAX

 <data type> *pointer_name = &variable_name ;
 
 */
// program to declare and intilize pointer
#include<stdio.h>
int main()
{
    int n=10;
    int *p=&n;
    printf("adress of n %llu",p);

    return 0;
}
// now using pointer we ve to print  value of variable not the address 
#include<stdio.h>
int main()
{
    int n=5,f=78;
    int *p=&f,*nn=&n;
    printf("address of %p%p",*p,*nn);
    return 0;
}
//charachters is a data type which holds 1 byte of memory in a ram . It can be letter sepcial symbol,digit.
// %c is a format charachter and is denoted in betwen (' ')
// initiize and declraton of a charachter
#include<stdio.h>
int main()
{
    int day=6,month=3,year=2006;
    char sep='/';    // sep is declaration of char . '/' is intilize 

    printf("%d%c%d%c%d",day,sep,month,sep,year);

    return 0;
    // same we can use '-' also
} 
/*ASCII Code-american standard code for information interchange 
a code is assign to a character 
A-Z = 65 to 92    ------> 65/2 will be 1000001 ....till Z
a-z = 97 to 122
*/
// DIIFERENCE BETWEEN 5 AND '5' to print '5'
#include<stdio.h>
int main()
{
    char digit='5';

    printf("%c",digit);
    return 0;
}
// read a charachter and print the same in console 
#include<stdio.h>
int main()
{
    char gender;

    printf("enter your gender f or m :");
    scanf("%c",&gender);
    printf("gender : %c",gender);// here %c will print the char 

    return 0;
}
// reading a  multiple charachters
 #include<stdio.h>
 int main()
 {
    char ch1,ch2;

    printf(" enter 2 charachters :");
    scanf("%c%c",&ch1,&ch2);

    printf("charachter 1:%c",ch1);
    printf("charachter 2:%c",ch2);
     return 0;
 }
//convert upper case to lower case ascii code and getchar()
#include<stdio.h>
int main()
{

    char ch;
    
    printf("enter any letter in lower case :");

    ch=getchar();

    ch=ch-32;

    printf("%c",ch);

    return 0;
}
/*                           STRING 
is a sequence of charachters that are stoed in contagious blocks of memory and terminated by null '\0'
 string is a charachter data type 
 use format charachteer %s 
 +1 block is need ti be added when creating a string
 */
// string array of charachters 
#include<stdio.h>
int main()
{
    char str[6]="hello";//5+1=6 for \0
    printf("str=%s",str); // prit a string present at adress str 

    return 0;
}
// initialise a string using string copy[strcpy] function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[22];
    strcpy(str,"hello world");
     printf("str=%s",str);

     return 0;
}
// reading one word  string from user
#include<stdio.h>
#include<string.h>
int main ()
{
    char str[12];
    
    printf(" enter an string :");
    scanf("%s",str);

    printf("str=%s",str);
     return 0;
}
//  reading ,multiple words from user
#include<stdio.h>
#include<string.h>
int main()
{
    char str[22];

    printf("enter multiple words:");
    scanf("  %[^\n]",str);

    printf("str=%s",str);
     return 0;
}
// string length using strlen()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="hello world";

    int length =strlen(str);

    printf("%d",length);

    return 0;
}
//string length without using built in function
#include<stdio.h>
int main()
{
    char str[88]="hello world";
     int count=0,index=0;
while(str[index]!='\0')
{
    str[index+1] = str[index+1] - 32;
}
index++;
printf("result=%s",str);
return 0;
}
/* to print string  1.> */
#include<stdio.h>
int main()
{
    char name[10];

    printf("enter yout name:");
    scanf("%s",name);// name [will print the value] &name[print the addres of the value]

    printf("name=%s",name);
    return 0;
}
/* to print string  2.> */
#include<stdio.h>
int main()
{
    char city[20];

    printf("enter your city :");
    scanf("%s",city);

    printf("city name is= %s",city);
    return 0;
}
// count number of spaces in a string 
#include<stdio.h>
int main()
{
    char name[]="this is an example";
    int count=0,index=0;

    while(name[index]!='\0')// coz we dont know when to end 
    {
        if(name[index] == ' ')
        {
            count++;
        }
        index++;
    }
    printf("no.of spaces=%d",++count);
    return 0;
}
//; capatalise each letter of the first word
#include<stdio.h>
int main()
{
    char str[32]="this is an example";
    int index=0;

    str[0]=str[0]-32;

    while(str[index]!='\0')
    {
        if(str[index]==' ')
        {
         str[index+1]=str[index+1]-32;
        }
         index++;
    }

    printf("result=%s",str);
    return 0;
}
// find length of each string
#include<stdio.h>
int main()
{
    char str[65]="this is an example";
    int count=0,index=0;

    while(str[index]!='\0')
    {
        if(str[index] == ' ')
        {
            printf("%c",str[index]);
            count++;
        }
        else
        {
            printf("-%d",count);
            count=0;
        }
        index++;
    }

    printf("-%d",count);
    return 0; 
}
// reverse the given string 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[32]="hello";
    strev(str);
    printf("%s",str);

    return 0;
}
// comparing 2 string 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="hello";
      char b[]="world";
      int result=strcmpi(a,b);

      printf("%d",result);

      return 0;
}
// string concatinate : joining of 2 strings 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="hello";
      char b[]="world";
      int result=strcat(a,b);

      printf("%s",result);

      return 0;
 
}
// string search str
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="spain is full of hills";
    char b[]="spain";
    char *result = str(a,b);

    if(result!=NULL)
    {
       printf("SUBSTRING FOUND %s\n",result);
    }
    else
    {
        printf("SUBSTRING  not FOUND");
    }
 
    return 0;
}
// array of string ( a collection of string in an array)
#include<Stdio.h>
#include<string.h>
int main()
{
    char numbers[5][16]={"one","two","three","four","five"};
    int rows =sizeof(numbers)/sizeof(numbers[0]);//sizeofa(rrayname)/sizeof(array[elements])
}
#include<stdio.h>
#include<string.h>
int main()
{
    char* days[7]={"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
    char* temp;
    int i,j;
    
   int size =sizeof(days)/sizeof(char*);

   for(i=0;i<size-1;i++);
    {
       for( j=0;j<size-1-i;j++)
        {
          if(strcmp(days[j],days[j+1])>0)
            {
              temp=days[j];    // compare and swap th elements
              days[j]=days[j+1];
              days[j+1]=temp;
            }
        }
    }

   for(int i=0;i<size;i++)
   {
    printf("%s\n",days[i]);
   }

   return 0;
}
// program to remove duplicate  string and transfer into new array 
#include<stdio.h>            
#include<string.h>          
int main()
{
    char* days[7]={"monday","tuesday","monday","tuesday","friday","thrusday","monday"};
    char* temp;
    int size=sizeof(days)/sizeof(char*);
    int flag,ind=0;
    char* result[7]={0};
    
    for(int i=0;i<size;i++)
    {
        temp=days[i];
        flag=0;
        for(int j=0;j<size;j++)
        {
            if(result[j] != NULL && strcmp(temp, result[j]) == 0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
          {
            result[ind]=temp;
            ind++;
          }
    }
    for(int i=0;i<size-1;i++)
    {
        if(result[i] != NULL)
    printf("%s\n", result[i]);
       
    }
    return 0;
}
/*                                  STRUCTURE 
it is a user defined  data type where a user can make thier own data type where 
it contains multiple data type
(fundamentals data type)like int float double, char etc.    
2-> the structre should have a unique and not the fundamental name 
when the data type is declared ofc it need a variable 
 so these structure data type should be intilize  a name (variable)
 when we want to fecth the data type and more we've a specfic symbol dot [.]
  where a user can see where it is locates and in which             
*/
/*                                SYNTAX

typedef struct date
{
int day,month,year;
}date 

EXPLANATIOIN:->   struct -> creating a structure (group of variables)”

💡 Why?

Because:

One variable = one value
But date needs 3 values

So we group them:
                date -> is the  group of variables
.. hence now date is structure ehere it has 3 values(variables)

 -------> this date neeeds to be intilize by  a variable .
*/ 
// program  save date/ read date from the user/and print in console.
typedef struct date
{
 int day,month,year;
} date;
int main()
{
    date d;  // d is the variable for data type date

   d.day=21;
   d.month=12;
   d.year=2026;
 printf("%d-%d-%d\n",d.day,d.month,d.year);

return 0;
}
// progarm to store data in a profile and print it
#include<stdio.h>
typedef struct profile 
{
  int  reg_no,adrs;
  unsigned long long int adhar_no,ph_n;
  char name[20];
}profile;
int main()
{
    profile prf[100];
    printf("enter details of 5 profile:");

    for(int i=0;i<5;i++)
    {
        printf(" reg_no: ");
        scanf("%d",&prf[i].reg_no);

        printf(" adrs: ");
        scanf("%d",&prf[i].adrs);

        printf("  adhar_no: ");
        scanf("%llu",&prf[i].adhar_no);

        printf(" ph_n: "); 
        scanf("%llu",&prf[i].ph_n);
        
        printf(" name: ");
        scanf(" %[^\n]", prf[i].name);    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t%d\t%llu\t%llu\t%s",prf[i].reg_no,prf[i].adrs,prf[i].adhar_no,prf[i].ph_n,prf[i].name);
    }

 return 0;      
}
// memory allocations-> malloc(),calloc(),freealloc()
/* malloc()-> memory allocation
calloc() -> memory allocation [it contains no gvb value but 0]
freealloc() -> clear the memory
dealloc() ->
*/
// program to allocate memory of 20 bytes
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr=malloc(20); // pointer

    printf("Enter any 5 integers :\n");

    for(int i=0;i<5;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Elements stored in allocated memory...\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);//deallocating memory
    return 0;
}
// program to allocate memory using calloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr=calloc(5,4);

    printf(" elements stored in alloacate memory......");

    for(int i=0;i<5;i++)
    {
        printf("%d",*(ptr+1));
    }
    return 0;
}
// program to realloc the memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr=malloc(20); // pointer

    printf("adressesof memory :\n");

    for(int i=0;i<5;i++)
    {
       printf("%llu",(ptr+i));
    }
    ptr=realloc(ptr,28);
    
    printf("adressesof memory :\n");

    for(int i=0;i<7;i++)
    {
       printf("%llu",(ptr+i));
    }
return 0;
}
/*                                       FILES
is a structure data type :storing data permenantly
*/
// program to create a file
#include<stdio.h>
int main()
{
    char* file_path="d:\\file2.txt";
    FILE *fp= NULL;

    fp=fopen(file_path,"r");
    if(fp!=NULL)
    {
    printf("file already present:");
    }
    else
    {
        fp =fopen(file_path,"w");

        printf("file created:");
    }
    fclose(fp);
   return 0;
}
#include<stdio.h>
int main()
{
    char *file_path ="d:\\file3.txt";
    FILE *fp=NULL;
    fp=fopen(file_path,"r");

    if(fp!=NULL)
    {
        printf("file is present");
    }
    else
    {
        fp=fopen(file_path,"w");

           printf("file created");
    
    fprintf(fp,"%s\t%d\n","s2",1001);
    fprintf(fp,"%s\t%d\n","s2",1002);
     fprintf(fp,"%s\t%d\n","s3",1003);
     fprintf(fp,"%s\t%d\n","s4",1004);
     fprintf(fp,"%s\t%d\n","s5",1005);
     fprintf(fp,"%s\t%d\n","s6",1006);
    }

    fclose(fp);
    return 0;
}
// file in description.txt
#include<stdio.h>
int main()
{
    char *file_path = "description.txt";
    char desc[2048];
    FILE *fp =NULL;
    fp=fopen(file_path,"r");

    if(fp!=NULL)
    {
        printf("file present");
    }
    else
    {
        fp=fopen(file_path,"w");
        printf("enter discription:");
        scanf("%[^\n]",desc);

        fprintf(fp,"%s",desc);
    }
    fclose(fp);

    return 0;
}
// ADDING DATA INTO EXISTING FILE
#include<stdio.h>
int main()
{
    FILE *fp;

    fp=fopen("file4.txt","a");

    if(fp==NULL)
    {
        printf("file not exist");
        return 0;
    }

    fprintf(fp,"%s\t%d\n","s5",1001); // everything checked now just add data usinf fprintf
    fprintf(fp,"%s\t%d\n","s6",1002);

    fclose(fp);

    printf(" data added succesfully");

 return 0;
}
// addd data of students into exsisting file
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","a");

    if(fp==NULL)
    {
        printf("file not open");
        return 0;
    }
    char a[20];
    int n,name,marks; // for number of entries for size

    printf("enter number of students:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("enter name and marks:");
        scanf("%s%d",name,&marks);

        fprintf(fp,"%s\t%d\n",name,marks);
    }
    fclose(fp);

    printf("data added succesfully");

    return 0;
}
// write data using do while loop to ask the user continue
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","a");

    if(fp==NULL)
    {
        printf("file not open");
        return 0;
    }
    char a[20],choice,name;
    int n,marks; // for number of entries for size

    printf("enter number of students:");
    scanf("%d",&n);

   do
   {
    printf("enter name and marks:");
    scanf("%s%d",name,&marks);

    fprintf(fp,"%s\t%d\n",name,marks);


    printf("Add more? (y/n): ");
    scanf(" %c", &choice);

   } while (choice == 'y');
   
    fclose(fp);

    printf("data added succesfully");

    return 0;
}
//reading file line by line
#include<stdio.h>
int main()
{
    
}