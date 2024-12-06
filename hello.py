print("Hello World!")
n = int(input("Enter the value of n: "))
while(0<n<=100):
    while(n%2!=0):
        print("Weird")
        break
    while(n%2==0):
        if(n in range(2,6)):
            print("Not Weird")
            break
        elif(n in range(6,20)):
            print("Weird")
            break
        elif(n in range(20,100)):
            print("Not Weird")
            break


