from functools import reduce

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def main():

    num_list = input("Enter a list of numbers separated by spaces: ").split()
    num_list = [int(num) for num in num_list]

 
    prime_nums = list(filter(is_prime, num_list))

  
    doubled_primes = list(map(lambda x: x * 2, prime_nums))

    
    max_number = reduce(lambda x, y: x if x > y else y, doubled_primes)

    print("Input List=", num_list)
    print("List after filter=", prime_nums)
    print("List after map=", doubled_primes)
    print("Output of reduce", max_number)

if __name__ == "__main__":
    main()
Co