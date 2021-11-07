def euclid_GCD(num1, num2):
  if num2 == 0:
    return num1
  
  num1_compliment = num1 % num2
  return euclid_GCD(num2, num1_compliment)


a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
result = euclid_GCD(a, b)

print(f"The GCD of {a} and {b} is {result}")
