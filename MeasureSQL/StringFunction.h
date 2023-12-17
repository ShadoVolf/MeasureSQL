#ifndef STRINGFUNCTION_H
#define STRINGFUNCTION
#include <string.h>
#include <vcl.h>
void cutString(AnsiString nom, AnsiString& osm, AnsiString& type, AnsiString& t, AnsiString& nastr, AnsiString& norm, AnsiString& nominal, AnsiString& Cn, AnsiString& V, AnsiString &cod, AnsiString &C, AnsiString &suf);
void changeDelimeter(AnsiString& a);
bool isNumber(char *Symbol);
#endif
