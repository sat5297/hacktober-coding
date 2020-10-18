from collections import Counter as c

def frequency_counter(s):
	"""
	>>>frequency_counter("aaabbcbdde")
	returns a dictionary with the following data:
	'a' : 3,
	'b' : 3,
	'c' : 1,
	'd' : 2,
	'e' : 1
	"""
	return c(s)
