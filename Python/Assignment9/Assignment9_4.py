import sys

def Compare_Files(File1, File2):
    
    f1=open(File1,"r")
    f2=open(File2,"r")
    content1=f1.read()
    content2=f2.read()
    f1.close()
    f2.close()
    if content1 == content2:
         print("Contents of the files are the same. Successful!")
    else:
         print("Contents of the files are different. Failure!")
    

def main():
      
    File1 = sys.argv[1]
    File2 = sys.argv[2]
    Compare_Files(File1, File2)

if __name__ == "__main__":
        main()
    
        