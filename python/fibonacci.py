
def fibonacci(n):
  fib_nums = [0, 1] # initialize the list with the
  for i in range(n):
    fib_nums.append(fib_nums[-1] + fib_nums[-2])
  
  return fib_nums[n-1]

n = int(input("Enter the number in Fibonacci sequence you would like to see: "))
answer = fibonacci(n)

print(f"Number {n} in Fibonacci sequence is {answer}")
