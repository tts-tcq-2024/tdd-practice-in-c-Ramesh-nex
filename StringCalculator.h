int isnotemptystr(const char *input)
{ if (input == NULL || input[0] == '\0') {
        return 1; 
    }
   return 0;
}
int isnotsingledigit(const char *input)
{
        int ret;
       ret = (input[1]=='\0'&&input[0] >= '0' && input[0] <= '9')?  (input[0]): 0;

   return ret;
}
int add(const char *input) {
   if(isnotemptystr(input))
   {
          return 0;
    }
 return -1;
}
