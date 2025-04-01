%option noyywrap
%{
    #include <stdio.h>
    int v = 0, c = 0;
%}

%%

[aeiouAEIOU]        { v++; }
[a-z A-Z]           { c++; }
[ \t\n]             ; 
.                   ;  

%%

int main() {
    printf("Enter a string: ");
    yylex();
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
    return 0;
}

