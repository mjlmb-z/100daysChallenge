import array as ar
i = 0; a=ar.array;
while i < 100:
    if (i % 2 == 0):
        a=ar.array('i',[i])
    else:
        a=ar.array('i',a[i])
    i=i+1
