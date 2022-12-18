#include <stdio.h>  
int main()  
{  
printf("WELCOME TO THE C CALCULATOR\n");

    // declare local variables  
    char opt;  
    int num1, num2;   
    float result;  
    printf ("Choose an operator from the following: +, -, *, / to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); 
    //Print the selected operator
    if (opt == '/' )  
    {  
        printf (" Selected operator is Division");  
    }  
    else if (opt == '*')  
    {  
        printf (" Selected operator is Multiplication");  
     }  
       
    else if (opt == '-')  
    {  
        printf (" Selected operator is Subtraction");  
     }  
        else if (opt == '+')  
    {  
        printf (" Selected operator is Addition");  
     }     
     //Take first number as input
    printf (" \n Enter the first number: ");  
    scanf(" %d", &num1); 
    //Take second number as input
    printf (" Enter the second number: ");  
    scanf (" %d", &num2);  
      
    switch(opt)  
    {  
        case '+':  
            result = num1 + num2; 
            printf (" Addition of %d and %d is: %.2f \n", num1, num2, result);  
            break;  
          
        case '-':  
            result = num1 - num2; 
            printf (" Subtraction of %d and %d is: %.2f \n", num1, num2, result);  
            break;  
              
        case '*':  
            result = num1 * num2;
            printf (" Multiplication of %d and %d is: %.2f \n", num1, num2, result);  
            break;            
          
        case '/':  
            if (num2 == 0)   
            {  
                printf (" \n You cannot divide by zero you uncircumsiced phillistine! Now enter another number:  ");  
                scanf ("%d", &num2);        
                }  
            result = num1 / num2;
            printf (" Division of %d and %d is: %.2f \n", num1, num2, result);  
            break;  
        default:  
            printf (" Enter the following operators only: +, -, *, / ");               
    }  
    return 0;  
}  
