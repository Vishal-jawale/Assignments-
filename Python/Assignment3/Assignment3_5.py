
import MarvellousNum

def listprime(numbers):
    prime_sum = 0
    for num in numbers:
        if MarvellousNum.chkprime(num):
            prime_sum += num
    return prime_sum

def main():
    try:
        n = int(input("Enter the number of elements: "))
        num_list = []
        for i in range(n):
            num = int(input(f"Enter element {i + 1}: "))
            num_list.append(num)
        
        result = listprime(num_list)
        print(f"Sum of prime numbers in the list: {result}")
    
    except ValueError:
        print("Invalid input. Please enter valid numbers.")

if __name__ == "__main__":
    main()