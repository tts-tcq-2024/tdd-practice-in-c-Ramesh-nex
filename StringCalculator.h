
int add(const char *input) {
   if (input == NULL || *input == '\0') {
        return 0;  // Return 0 for empty string
    }

    int sum = 0;
    char *delimiter = ",\n";  // Default delimiters

    // Check if input starts with //[delimiter]\n pattern
    if (strncmp(input, "//[", 3) == 0) {
        char *end = strstr(input, "]\n");
        if (end != NULL) {
            *end = '\0';  // Terminate delimiter string
            delimiter = input + 3;  // Move delimiter pointer past //[ to start of delimiter
            input = end + 2;  // Move input pointer past ]\n
        }
    }

    char *token = strtok(input, delimiter);
    while (token != NULL) {
        int number = atoi(token);
        
        if (number < 0) {
            // Throw exception for negative numbers
            fprintf(stderr, "negatives not allowed: %d\n", number);
            return -1;  // Indicate error
        }

        if (number <= 1000) {
            sum += number;  // Add number to sum if <= 1000
        }

        token = strtok(NULL, delimiter);
    }

    return sum;
}
