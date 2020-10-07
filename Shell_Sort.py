def shellSort(array, n):

    interval = n // 2
    while interval > 0:
        for i in range(interval, n):
            temp = array[i]
            j = i
            while j >= interval and array[j - interval] > temp:  
                array[j] = array[j - interval]
                j -= interval

            array[j] = temp
        interval //= 2  #the interval is reduced


data = [9,100, 5, 6, 4, 1]
size = len(data)
shellSort(data, size)
print('Sorted Array -->')
print(data)