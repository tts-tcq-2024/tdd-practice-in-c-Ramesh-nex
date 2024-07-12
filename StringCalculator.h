int sum(char *input)
{
   char *token;
    int sum = 0,j;

   char delimiters[15]="$#\n:,;//\&#%";
  
    token = strtok(input1, delimiters);
   
    while (token != NULL) {
        // Convert token to integer using atoi
        int num = atoi(token);
        if (num <= 1000) {
        // Add to the sum
        sum += num;
        }
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
   char input1[15];
   strcpy(input1,input);
   if(strlen(input)==1)
   {
      ret = atoi(input[0]);
   }
   else
   {
      ret = sum(input1);
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

