
class BookStore:

    NoOfBooks=0

    def __init__(self,BookName,BookAuthor):
        self.Name=BookName
        self.Author=BookAuthor
        BookStore.NoOfBooks= BookStore.NoOfBooks+1

    def Display(self):
        print("Name Of Book :",self.Name)
        print("Author Of Book :",self.Author)
        print("Total No. Of Books: ",self.NoOfBooks)





def main():

    Obj1 = BookStore("Linux System Programming", "Robert Love")
    Obj1.Display()

    Obj2 = BookStore("C Programming", "Dennis Ritchie")
    Obj2.Display()


    


if __name__=="__main__":
    main()