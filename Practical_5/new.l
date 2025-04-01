
%{
#include <stdio.h>
extern int yylineno;
%}

%x COMMENT

%%

"/*"			{ BEGIN(COMMENT); }
<COMMENT>"*/"		{ BEGIN(INITIAL); }
<COMMENT>\n		{ yylineno++; }
<COMMENT>.		;
\n			{ yylineno++; }
.			{ ECHO; }

%%

int yywrap(void)
{
	return 1;
}
