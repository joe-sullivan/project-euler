def is_palindrome(num):
	return num == int(str(num)[::-1]);

largest = 0;
for i in range(100,999):
	for j in range(100,999):
		if is_palindrome(i * j) and i*j > largest:
			largest = i * j
print(largest)
