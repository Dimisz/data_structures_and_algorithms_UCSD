# This implementation passed the grader
# least common multiple = abs(a * b)/gcd(a,b)

def euclid_GCD(num1, num2):
"""
Given two numbers calculates greatest common divisor
"""
  if num2 == 0:
    return num1
  
  num1_compliment = num1 % num2
  return euclid_GCD(num2, num1_compliment)

nums_input = input().split()
a = int(nums_input[0]) # input number 1
b = int(nums_input[1]) # input number 2
gcd = euclid_GCD(a,b) #greatest common divisor for a, b

lcm = int(abs(a * b)/ gcd) #lowest common multiple
print(lcm)
