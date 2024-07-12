int issingledigit(const char input)
{
   if(input>=0&&input<=9 )
   {
      return 1;
   }
   return 0;
}
int sum(const char *input)
{
   int tot=0,idx;
   for(idx=0;idx<strlen(input);i++)
      {
   tot = atoi(input[0]);
      }
   return tot; 
}
int isempty(const char *input)
{
   if (strlen(input)==0)
   {
        return 1; 
   }
        return 0; 
}

int issinglechar(const char *input)
{
   int ret;
   if(strlen(input)==1)
   {
      ret = issingledigit(input[0]);
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
      ret = 0;
   }
   else
   {
     ret = issinglechar(input);
   }
  
   return ret;
}

