// string pointer may cause many problem especiallly in string struct
// I prefer a way to copy string avoiding allocating incorrectly in memory

/* TODO: return copied string
 * from char * to char *
 * char *newStr = copyStr(oldStr)
 */
char *copyStr(const char *str)
{   char *s;
    s = (char*)csc_ck_malloc((size_t)strlen(str)+1);
    strcpy(s,str);
    return(s);
}
