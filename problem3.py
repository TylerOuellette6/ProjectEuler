# PROBLEM: 
# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143?
import math 

# Change this varible to test a different number
numToCheck = 600851475143 
# Current largest prime factor that has been found
largest = 2
# Start loop at 3 for sake of efficiency 
# This loop is looking at all number between 3 and the square root of the target num 
# Only go up to the square root of the number (plus one) for sake of efficiency
for i in range (3, int(math.sqrt(numToCheck))+1):
	prime = True
	# Start loop at 3 for sake of efficiency
	# This loop is checking that i is prime
	# Only go up to the square root of the number (plus one) for sake of efficiency
	# Increment the loop by 2 since even numbers can't be prime
	for j in range (3, int(math.sqrt(i))+1, 2):
		if(i % j == 0):
			prime = False
			break

	# Check if the number is a factor AND that it's prime
	if(numToCheck % i == 0 and prime):
		if(i > largest):
			largest = i

print(largest)