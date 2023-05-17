#include <stdio.h>
void decript(char* sms){
    char* ptr = sms;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 10;
        ptr++;
    } 
}
int main(){
    char massage[200];
    printf("Enter Your SMS: ");
    gets(massage);
    decript(massage);
    printf("Your Decripted SMS is :%s" , massage);
    return 0;
}
