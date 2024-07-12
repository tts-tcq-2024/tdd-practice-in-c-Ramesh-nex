
int sum(const char *input)
{
   int idx =0;
   int total=0;
   while(input[idx] != '\0')
      {
         total += input[idx];
      }
  return total; 
}
int isempty(const char *input)
{
   if (input == NULL || input[0] == '\0') {
        return 1; 
    }
           return 0; 
}
int issingledigit(const char *input)
{
   if(input>=0&&input<=9 )
   {
      return input;
   }
   return 0;
}
int issinglechar(const char *input)
{
   int ret;
   if(strlen(input)==1)
   {
      ret = issingledigit(input);
   }
   else
   {
      ret = sum(input);
   }
return ret;
}

int add(const char *input) 
{
   int ret=1;
   if(isempty(input))
   {
      return 0;
   }
   else
   {
     ret = issinglechar(input);
   }
   ret = (issinglechar(input));
   return 0;
}

