import math

def fib(n):
  phi = (1 + math.sqrt(5)) / 2;
  return round((phi ** n) / math.sqrt(5))
  
n = int(input())
answer = fib(n)
print(answer)
