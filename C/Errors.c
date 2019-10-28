// Find out the Error in the following problems

// 1)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned char;
    FILE *fp;
    fp=fopen("trial", "r");
    if(!fp)
    {
        printf("Unable to open file");
        exit(1);
    }
    fclose(fp);
    return 0;
}
	
// 2) Point out the error in the program?
#include<stdio.h>
int main()
{
    char ch;
    int i;
    scanf("%c", &i);
    scanf("%d", &ch);
    printf("%c %d", ch, i);
    return 0;
}

// 3)
#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("trial", "r");
    fseek(fp, "20", SEEK_SET);
    fclose(fp);
    return 0;
}


// 4)
#include<stdio.h>
/* Assume there is a file called 'file.c' in c:\tc directory. */
int main()
{
    FILE *fp;
    fp=fopen("c:\tc\file.c", "r");    
    if(!fp) 
      printf("Unable to open file.");        

    fclose(fp);
    return 0;
}

// 5)
#include<stdio.h>

int main()
{
    unsigned char ch;
    FILE *fp;
    fp=fopen("trial", "r");
    while((ch = getc(fp))!=EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}


// True / False Questions

// 1.  
// While calling the fprintf() function in the format string conversion specifier %s can be used to write a character string in capital letters.

// A.  True
// B.  False

// 2.  
// A text stream is an ordered sequence of characters composed into lines, each line consisting of zero or more characters plus a terminating new-line character.

// A.  True
// B.  False

// 3.  
// Offset used in fseek() function call can be a negative number.

// A.  True
// B.  False

// 4.  
// We should not read after a write to a file without an intervening call to fflush(), fseek() or rewind()

// A.  True
// B.  False

// 5.  
// In a call to printf() function the format specifier %b can be used to print binary equivalent of an integer.

// A.  True
// B.  False
