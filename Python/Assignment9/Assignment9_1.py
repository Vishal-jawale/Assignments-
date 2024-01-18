import os

def main():
    print("Enter File Name Which you want to check Exists or not: ")

    File_Name=input()

    if(os.path.exists(File_Name)):
        print("File Exists in Current Directory")
    else:
         print("File Not Exists in Current Directory")

   


if __name__=="__main__":
    main()