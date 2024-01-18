import os
import sys

def Copy_File_Contents(input_filename,output_filename):
    try:
        with open(input_filename, 'r') as source_file, open(output_filename, 'w') as dest_file:
            dest_file.write(source_file.read())
        print(f"Contents of '{input_filename}' copied to '{output_filename}' successfully.")
    except FileNotFoundError:
        print(f"Error: The file '{input_filename}' does not exist.")
    except Exception as e:
        print(f"An error occurred: {str(e)}")


if __name__ == "__main__":
    

        input_filename = sys.argv[1]
        output_filename = "Demo.txt"
        Copy_File_Contents(input_filename,output_filename)

    
