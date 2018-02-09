def sumdigsqr(n):
	sum=0
	while(s!=0):
		d=s%10
		sum+=d*d
		s//=10
	return sum
def happy(n):
	while(s>0):
		s=sumdigsqr(s)
		if s==1:
			print('happy number')
			return
	print('not happy number')
def main():
	try:
		s=int(input())
		happy(s)
	except:
		print('invalid')
main()
