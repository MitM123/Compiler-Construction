%option noyywrap
%{
    #include<stdio.h>
%}

%%

[0-9]+ {printf("Number is -> %s \n",yytext);}
.       ;

%%

int main(){
    printf("Enter a String :");
    yylex();
}