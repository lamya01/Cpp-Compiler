%{
#include<stdio.h>
#include<string.h>
#include "y.tab.h"
int lineNo=1;
int scope=-1;
int isInt=0;
int isFloat=0;
int just=0;
%}
%%
\/\/(.*)
\/\*[^\*\/]*\*\/
"if"															{just=1;scope++;return IF;}
"else"													   {just=1;scope++;return ELSE;}
"for"															{just=1;scope++;return FOR;}
"while"														 {just=1;scope++;return WHILE;}
"#include"												  return INCLUDE;
"main()"													   {just=1;scope++;return MAIN;}
"{"															{if(just){just=0;}else{scope++;}return FO;}
"}"															{scope--;return FC;}
"("															return BO;
")"															return BC;
";"															return SeCo;
","															return com;
"+"															return plus;
"-"															return minus;
"*"															return mult;
"/"															return divide;
"%"     		        											return mod;
"=="|"<="|">="|"!="|"<"|">"       						       				        {yylval.text=strdup(yytext);return comp;}
"="															return assig;
"+="														return assigP;
"-="														return assigM;
"*="														return assigMu;
"/="														return assigD;
"++"															return UOP;
"--"                           			return UOM;
"&"|"&&"|"|"|"||"                   {yylval.text=strdup(yytext);return logical;}
"int"												{isInt=1;isFloat=0;return dataType;}
"char"											{return dataType;}
"float"                			{isFloat=1;isInt=0;return dataType;}
"<stdio.h>"|"<stdlib.h>"|"<string.h>" return library;
"printf"														return prin;
"break"															return brak;
"%d"															return d_;
"%f"															return f_;
"%s"															return s_;
[0-9]+"."[0-9]+									{yylval.floot=atof(yytext);return flot;}
[0-9]+														{yylval.text=strdup(yytext);return integer;}

\"[^\"]*\"     										{yylval.text=strdup(yytext);return string;}
[a-zA-Z_][a-zA-Z_0-9]*							{yylval.text=strdup(yytext);return id;}
[\n]														{lineNo++;}
[ ]|[\t]

.		return yytext[0];
%%
int yywrap(){
	return 1;
}
