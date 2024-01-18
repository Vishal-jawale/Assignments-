from functools import reduce

def main():

    
    num_list = input("Enter a list of numbers separated by spaces: ").split()
    num_list = [int(num) for num in num_list]

    
    even_nums = list(filter(lambda x: x % 2 == 0, num_list))

    
    squared_nums = list(map(lambda x: x ** 2, even_nums))

    total_sum = reduce(lambda x, y: x + y, squared_nums)

    print("Input List:", num_list)
    print("List after filter =", even_nums)
    print("List after map=", squared_nums)
    print("Output of reduce", total_sum)

if __name__ == "__main__":
    main()