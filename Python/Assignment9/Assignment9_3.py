import os
import sys

def Copy_File_Contents(input_filename,output_filename):
    
    source_file = open(input_filename, 'r')
    dest_file = open(output_filename, 'w')
    
    content = source_file.read()
    dest_file.write(content)
    
    source_file.close()
    dest_file.close()
    print("Contents of the files are Copied Successfully!") 


def main():
    input_filename = sys.argv[1]
    output_filename = "Demo.txt"
    Copy_File_Contents(input_filename,output_filename)
   

if __name__ == "__main__":
    main()

        
    
