/* Write a program to find the greatest among three numbers.*/
// if-else
#include <stdio.h>
int main() {
    int a,b,c ;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("a is largest.");
    }
    else if (b>a && b>c) {
        printf("b is largest.");
    }
    else if (c>a && c>b) {
        printf("c is largest.");
    }
    else {
        printf("a = b = c");
    }
    return 0;
}

/* double quotes is for strings(collection of characters) */
/* characters are written in single quotes.*/
/* or --> !! */

/* Write the following programs using switch case statement:
~ To check that an input alphabet is vowel or consonant 
~ To check whether a number is positive, negative or zero */

// To check that an input alphabet is vowel or consonant
#include <stdio.h>
int main() {
    char c ;
    printf("Enter any of the character: ");
    scanf("%c",&c);
    switch (c) {
        case 'a' :
        printf("Vowel");
        break;
        case 'A' :
        printf("Vowel");
        break;
        case 'e' :
        printf("Vowel");
        break;
        case 'E' :
        printf("Vowel");
        break;
        case 'i' :
        printf("Vowel");
        break;
        case 'I' :
        printf("Vowel");
        break;
        case 'o' :
        printf("Vowel");
        break;
        case 'O' :
        printf("Vowel");
        break;
        case 'u' :
        printf("Vowel");
        break;
        case 'U' :
        printf("Vowel");
        break;
        default:
        printf("Entered character is a consonant");
    }
    return 0;
}

// To check whether a number is positive, negative or zero
#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    switch (n>0) {
        case 1 :
        printf("Entered number is positive.");
        break;
        case 0 :
        switch (n<0) {
            case 1 :
            printf("Entered number is negative.");
            break;
            case 0 :
            printf("Entered number is zero.");
            break;
        }
        break;
    
    }
    return 0;
}


