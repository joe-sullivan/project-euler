sum_of_squares, square_of_sum = 0, 0
for x in range(1, 101):
	sum_of_squares += x * x
	square_of_sum += x
square_of_sum *= square_of_sum
print(square_of_sum - sum_of_squares)
