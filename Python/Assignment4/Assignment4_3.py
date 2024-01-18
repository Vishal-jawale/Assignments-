from functools import reduce

def main():
    
    num_list = input("Enter a list of numbers separated by spaces: ").split()
    num_list = [int(num) for num in num_list]


    filtered_nums = list(filter(lambda x: 70 <= x <= 90, num_list))

   
    mapped_nums = list(map(lambda x: x + 10, filtered_nums))

    
    output_of_reduce= reduce(lambda x, y: x * y, mapped_nums)

    print("Input List:", num_list)
    print("List after filter =", filtered_nums)
    print("List after map=", mapped_nums)
    print("Output of reduce", output_of_reduce)

if __name__ == "__main__":
    main()