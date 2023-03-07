#!/usr/bin/python3

def main():
	max = 0
	for i in range(100, 999):
		for j in range(100, 1000):
			if i * j > max and is_pal(i * j):
				max = i * j
				mul = [i, j]
			else:
				continue
	print(f'largest palindrome formed from multiplying two 3 digit numbers is {max}')
	print(f'gotten from {mul[0]} and {mul[1]}')

def is_pal(num):
	if str(num) == (str(num))[::-1]:
		return True
	return False


if __name__ == '__main__':
	main()
