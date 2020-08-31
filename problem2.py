# PROBLEM:
# Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
# By starting with 1 and 2, the first 10 terms will be:
# 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
# By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
# find the sum of the even-valued terms.


# This will return ths "nth" Fibonnaci number in the sequence
# def fib(n):
# 	if(n <= 0):
# 		return 0
# 	elif(n <= 2):
# 		return 1
# 	else:
# 		return fib(n-1) + fib(n-2)


# Keep track of previous and current number in sequence and total sum
curPrev = 1
cur = 1
sum = 0
# Only go to four million
while(cur < 4000000):
	# Shift everything up
	temp = cur
	cur = cur + curPrev
	curPrev = temp
	# If it's an even number, add it to the total
	if(cur % 2 == 0):
		sum += cur

	