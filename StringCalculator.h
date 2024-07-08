bool isemptystr(const char *input)
{ if (input == NULL || input[0] == '\0') {
        return TRUE; 
    }
   return FALSE;
}

int add(const char *input) {
   if(isemptystr(input))
   {
  return 0;
    }
 return -1;
}
