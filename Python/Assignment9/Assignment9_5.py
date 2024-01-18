import sys


def String_Frequency(File_Name, Search_String):
    file = open(File_Name, 'r')
    content = file.read()
    Frequency = content.count(Search_String)
    file.close()
    return Frequency


def main():
      
    File_Name = input("Enter the file name: ")
    Search_String = input("Enter the string to search for: ")

    Frequency = String_Frequency(File_Name, Search_String)

    print("Frequency Of that string is :",Frequency)


if __name__ == "__main__":
        main()