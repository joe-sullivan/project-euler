num = 2520
rem = -1
while True:
	for x in range(1,20):
		rem = num % x
		if rem != 0: break
	if rem == 0: break
	num += 20

print(num)
