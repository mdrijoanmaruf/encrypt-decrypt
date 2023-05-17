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

    int i;
    printf("\nDone\n");
    scanf("%d" , i);
    return 0;
}