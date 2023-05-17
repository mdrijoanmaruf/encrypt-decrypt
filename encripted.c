#include <stdio.h>
void encript(char* sms){
    char* ptr = sms;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 10;
        ptr++;
    } 
}
int main(){
    char massage[200];
    printf("Enter Your SMS: ");
    gets(massage);
    encript(massage);
    printf("Your Encripted SMS is :%s" , massage);
    return 0;
}
