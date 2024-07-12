
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
   if(input[0]>=0&&input[0]<=9 )
   {
      return input[0];
   }
   return 1;
}
int issinglechar(const char *input)
{
   if(input[1]=='\0')
   {
      issingledigit(input);
   }
   else
   {
      sum(input);
   }

}

int add(const char *input) 
{
   int ret=1;
   if(isempty(input))
   {
      return 0;
   }
   ret = (issinglechar(input));
   return 0;
}

