int isnotemptystr(const char *input)
{ if (input == NULL || input[0] == '\0') {
        return 1; 
    }
   return 0;
}

int add(const char *input) {
   if(isnotemptystr(input))
   {
          return 0;
    }
 return -1;
}
