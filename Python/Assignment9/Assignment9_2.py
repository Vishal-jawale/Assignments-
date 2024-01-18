import os

def main():
    print("Enter File Name Which you want to Open: ")

    File_Name=input()

    if(os.path.exists(File_Name)):
        fobj=open(File_Name,"r")

        if fobj:
            for line in fobj:
                print(line,end=" ")

        else:
            print("Unable to Open File")


    else:
        print("File is not Exists in the current Directory")

  


if __name__=="__main__":
    main()