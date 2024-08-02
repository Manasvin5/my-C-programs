#!/bin/bash

# Directory containing the C source files
SOURCE_DIR="."

# Directory to store the compiled binaries
BINARY_DIR="./binary"

# Create the binary directory if it doesn't exist
mkdir -p "$BINARY_DIR"

# Compile each C file in the source directory
for file in "$SOURCE_DIR"/*.c; do
    # Extract the base name of the file (without extension)
    filename=$(basename -- "$file")
    base_name="${filename%.*}"
    
    # Compile the C file and place the binary in the binary directory
    tcc "$file" -o "$BINARY_DIR/$base_name"
    
    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compiled $file successfully."
    else
        echo "Failed to compile $file."
    fi
done

echo "All files processed."
