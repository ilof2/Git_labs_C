#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    int cou=0, j, word=0;
    char s[]="I cant make this programm without internet";
    for(j=0; j<strlen(s); j++){
        if(s[j]!=' '){
            cou++;
            if((s[j+1]==' ' || s[j+1]=='\0')&& cou<5){
                word++;
                cou=0;
            }
            else if(s[j+1]==' ' && cou > 4)cou=0;
        }
        
    }
printf("\nMenshe ili ravno 4:%d\n\n",word);
}
