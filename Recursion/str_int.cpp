#include<bits/stdc++.h>
int charToInt(char c)
{
    switch(c){
        case '0':
        return 0;
        break;
        case '1':
        return 1;
        break;
        case '2':
        return 2;
        break;
        case '3':
        return 3;
        break;
        case '4':
        return 4;
        break;
        case '5':
        return 5;
        break;
        case '6':
        return 6;
        break;
        case '7':
        return 7;
        break;
        case '8':
        return 8;
        break;
        case '9':
        return 9;
    }
    
}

int stringToNumber(char input[]) {
    // Write your code here
    if(strlen(input)==1)
    {
        return charToInt(input[0]);
    }
    
    int x=charToInt(input[strlen(input)-1]);
    input[strlen(input)-1]='\0';
    return (stringToNumber(input)*10)+x;
}


