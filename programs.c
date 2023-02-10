/* 1. Program to add two numbers. (when both numbers are integers) */
#include <stdio.h>
int main() {
    int a,b ; 
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Sum = %d",a+b);
    return 0;
}

/* 2. Program to add two numbers. (when both are float) */
#include <stdio.h>
int main() {
    float n1,n2;
    printf("Enter value of n1: ");
    scanf("%f",&n1);
    printf("Enter value of n2: ");
    scanf("%f",&n2);
    printf("Sum = %.2f",n1+n2); //Will give answer upto 2 decimal places
    return 0;
}

/* 3. Program to perform mathematical operations on 2 numbers (assuming both to be integers). */
#include <stdio.h>
int main() {
    int num1 , num2 ;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    printf("Sum = %d\n",num1+num2); //Addition
    printf("Difference = %d\n",num1-num2); //Subtraction
    printf("Product = %d\n",num1*num2); //Multiplication
    printf("Quotient = %d\n",num1/num2); //Division
    printf("Remainder = %d\n",num1%num2); //Modulous Operation
    return 0;
}

/* 4. Program to perform mathematical operations on 2 numbers (assuming both to be float).*/
#include <stdio.h>
int main() {
    int num1 , num2 ;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    printf("Sum = %d\n",num1+num2); //Addition
    printf("Difference = %d\n",num1-num2); //Subtraction
    printf("Product = %d\n",num1*num2); //Multiplication
    printf("Quotient = %d\n",num1/num2); //Division
    printf("Remainder = %d\n",num1%num2); //Modulous Operation
    return 0;
}

/* 5.  You are given a number n, print the number is +ve ,-ve or 0. */
#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    if (n>0) {
        printf("Entered number is positive.");
    }
    else if (n<0) {
        printf("Entered number is negative.");
    }
    else {
        printf("Entered number is zero.");
    }
    return 0;
}

/* 6. You are given two number x,y print the greater number. */
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    if (x>y) {
        printf("x is greater than y.");
    }
    else if (x<y) {
        printf("y is greater than x.");
    }
    else {
        printf("x = y");
    }
    return 0;
}

/* 7. You are given three number x,y,z. print the smallest number */
#include <stdio.h>
int main() {
    int x,y,z ;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    printf("Enter value of z : ");
    scanf("%d",&z);
    if (x>y && z>y) {
        printf("y is smallest.");
    }
    else if (y>x && z>x) {
        printf("x is smallest.");
    }
    else if (x>z && y>z) {
        printf("z is smallest.");
    }
    else {
        printf("x = y = z");
    }
    return 0;
}

/* 8. You are given a number n. print the value of factorial n! */
#include <stdio.h>
int main() {
    int n,fact,i ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    fact = i = 1;
    while(i<=n) {
        fact = fact*i ;
        i++ ;
    }
    printf("Factorial of %d = %d\n",n,fact);
    return 0;
}