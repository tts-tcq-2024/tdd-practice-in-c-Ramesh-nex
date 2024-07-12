int issingledigit(const char input)
{
   if(input>=0&&input<=9 )
   {
      return 1;
   }
   return 0;
}
int add_arr(int *arr,int cnt)
{
    int i = 0;
    int total = 0;
    while(i < cnt)
    {
        if(arr[i] < 1000)
        {
          total += arr[i];
        }
        i++;
    }

    return total;
}
void strtonum(const char* ch, int *num_arr,int *cnt)
{
    static int num = 0;

    if(issingledigit(ch[*cnt]))
    {
       num = num * 10 + ch[*cnt] - '0';
       if(issingledigit(ch[(*cnt)+1]))
       {
           (*cnt)++;
       }
       else
       {
          num_arr[*cnt] = num;
          num = 0;
          (*cnt)++;
       }
    }
    else
    {
        (*cnt)++;
        num = 0;
    }
}
int sum(const char *input)
{
   int idx =0;
   int total=0;
   int arr[100] = {0};
   while(input[idx] != '\0')
      {
         strtonum(input,arr,&idx);
      }
    total = add_arr(arr,idx);
  return total; 
}
int isempty(const char *input)
{
   if (input == NULL || input[0] == '\0') {
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
      return 0;
   }
   else
   {
     ret = issinglechar(input);
   }
   ret = (issinglechar(input));
   return 0;
}

