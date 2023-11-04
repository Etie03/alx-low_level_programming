#!/bin/bash

# Set the C file name
CFILE=""0-preprocessor.c"
# Name of the output file
OUTPUT_FILE="c"

# Run the C file through the preprocessor and save the result
gcc -E "$CFILE" -o "$OUTPUT_FILE"
