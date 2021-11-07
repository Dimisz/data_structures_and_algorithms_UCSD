# Reimplementing the max_pairwise_product.cpp in Python
# See the repo for cpp
import random # needed for stress test

def max_pairwise_product(num_list):
  """
  The simplest possible solution.
  The function simply multiplies all the possible pairs,
  and chooses the largest result.
  
  Very slow.
  """
  result = 0
  n = len(num_list)
  for i in range(n):
    for j in range(i+1, n):
      if (num_list[i] * num_list[j]) > result:
        result = num_list[i] * num_list[j]
  return result
  

# The function above rewritten for execution efficiency
def max_pairwise_product_fast(num_list):
  """
  Iteraates through the list twice to find indeces of two largest numbers.
  Then nultiplies the numbers and returns the product.
  """
  n = len(num_list)
  
  max_index1 = -1
  for i in range(n):
    if (max_index1 == -1) or (num_list[i] > num_list[max_index1]):
      max_index1 = i
  
  max_index2 = -1
  for j in range(n):
    if (j != max_index1) and ((max_index2 == -1) or (num_list[j] > num_list[max_index2])):
      max_index2 = j
  
  return num_list[max_index1] * num_list[max_index2]

# IMPLEMENT STRESS TEST

#while True:
#  len_list = 1000
#  random_list = random.sample(range(0, 10000), len_list)
#  print(random_list)
#
#  res1 = max_pairwise_product(random_list)
#  res2 = max_pairwise_product_fast(random_list)
#
#  if res1 != res2:
#    print(f"Wrong answer {res1} {res2}")
#  else:
#    print("OK")
  
  
  
  
n = int(input()) # actually we don't need this here

num_list_as_str = input()
#print(num_list_as_str)
num_list_as_list_of_str = num_list_as_str.split()
#print(num_list_as_list_of_str)
num_list = [int(i) for i in num_list_as_list_of_str]

result = max_pairwise_product_fast(num_list)
print(result)

    
      
