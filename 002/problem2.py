a, b, sum = 0, 1, 0
while a < 4000000:
	a, b = b, a+b
	if a % 2 == 0:
		sum += a
print(sum)
