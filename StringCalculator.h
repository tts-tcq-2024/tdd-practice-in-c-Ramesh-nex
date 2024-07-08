int isempty(const char *input)
{
}
int issingledigit(const char *input)
{
   if(input>=0&&input<=9 )
   {
      return input[0];
   }
   return 1;
}
int issinglechar(const char *input)
{
   if(input[1]=='\0')
   {
      issingledigit(input)
   }
   return 1;
}
int add(const char *input) 
{
   int ret;
   if(isempty(input))
   {
      return 0;
   }
   ret = (issinglechar(input));
   return ret
}

