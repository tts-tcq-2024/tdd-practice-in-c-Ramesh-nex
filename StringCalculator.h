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
   char *token;
    int sum = 0;

    // Tokenize the input string based on comma delimiter
    token = strtok(input, ",");
    
    while (token != NULL) {
        // Convert token to integer using atoi
        int num = atoi(token);
        
        // Add to the sum
        sum += num;
        
        // Get next token
        token = strtok(NULL, ",");
    }
   return sum; 
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

