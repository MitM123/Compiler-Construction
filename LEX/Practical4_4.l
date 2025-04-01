%option noyywrap
%{
    #include<stdio.h>
    int charcount=0,wordcount=0,linecount=0;
%}

%%

[|w+] {wordcount++;charcount+=yyleng;}
[ \t]           {charcount+=yyleng;}
[\n]            {linecount++;}
.             ;  

%%

int main(){
    printf("Enter a String :");
    yylex();
    printf("Characters : %d \n",charcount);
    printf("word : %d \n",wordcount);
    printf("Line : %d \n",linecount);

}