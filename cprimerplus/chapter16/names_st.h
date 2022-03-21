// names_st.h
#include <string.h>
#define SLEN 32
// struct declarations
struct names_st
{
  char first[SLEN];
  char last[SLEN];
};
// define functions
typedef struct names_st names;
// define functins
void get_names(names *);
void show_names(const names *);
char *s_gets(char *st, int n);
