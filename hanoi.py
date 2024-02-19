import matplotlib.pyplot as plt
import time


def hanoi(n, source, target, auxiliary):
    start = time.time()
    if n > 0:
        # Move n-1 disks from source to auxiliary using target as the temporary peg
        hanoi(n - 1, source, auxiliary, target)

        # Move the nth disk from source to target
        #print(f"Move disk {n} from {source} to {target}")

        # Move n-1 disks from auxiliary to target using source as the temporary peg
        hanoi(n - 1, auxiliary, target, source)
    return (time.time()-start)

# You can call the function like this:
#hanoi(10, 'A', 'C', 'B')

def main():
    tempExec = [0,0,0,0,0]
    for i in range(0,5):
        tempExec[i] = hanoi(5*i,'A','C','B')
    
    for i in range(0,5):
        print(tempExec[i])

main()