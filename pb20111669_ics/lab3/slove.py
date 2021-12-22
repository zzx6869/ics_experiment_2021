filename = 'fib.txt'


with open(filename, 'r') as f:
    file = f.readlines()
    length=len(file)
    num=list()
    count=1
    i=0
    while count in range(length):
        if count>=length-5 and count!=length-1:
            s=file[count]
            num.append(s[-5:-1])
            num[i]=int(num[i],16)
            i+=1
        count+=1
    f.close()


def slove():
    student_num="PB"
    fib = [1, 1, 2]
    for i in range(3, 1000):
        fib.append((fib[i-1] +fib[i-3] *2) %1024)
    for j in range(0,4):
        for i in range(1, 100):
            if fib[i] == num[j]:
                student_num+=str(i)
    f=open("id.txt",'w')
    f.write(student_num)
    f.close()

slove()