    #include <stdio.h>
    int main(){
    unsigned char ASCII;
    int i, temp;

    printf("Enter an ASCII character: ");
    scanf("%c", &ASCII);
    printf("The ASCII value of %c is ", ASCII);
    printf("\n dec -- %d ", ASCII); // displays the decimal number
    printf("\n hex -- %x ", ASCII); // displays the hexidecimal number
    printf("\n bin -- ");
    for(i = 7; i >= 0; i--){ //displays the binary number by decreamating the numbers
        temp = ASCII >> i;
    if  (temp & 1) 
        printf("1");
    else
        printf("0");
        }

        printf(" ");
    return 0;
    }
