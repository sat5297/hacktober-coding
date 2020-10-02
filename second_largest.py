list_num = input('How many numbers do you want to add to the list ? ---> ')
numList = list()
list_size = 0
flag = 0

try:
    list_size = int(list_num)
    flag = 1
except:
    print('Please enter an Integer value for the total number of numbers in the list')
    flag = 0

ordinal = lambda n: "%d%s" % (n, "tsnrhtdd"[(n / 10 % 10 != 1) * (n % 10 < 4) * n % 10::4])
flag_ordinal = 0
if flag == 1 :
    inside_flag = 0
    for i in range(0,list_size):
            flag_ordinal = flag_ordinal + 1
            a = input('Enter ' + str(flag_ordinal) + ' number : ')
            try:
                n = int(a)
                numList.append(n)
                inside_flag = 1
            except:
                print('Enter a number.')
                inside_flag = 0
                break
else:
    print('Execution stopped encountered something else instead of numeric value')


if flag == 1 and inside_flag == 1:

    numList.sort()
    print("Second Largest Element is : "+ str(numList[list_size - 2]))



