import random

x = 0

io_ = open("data.txt", "w")

def generate_int_pool():
    global x
    while x < 15000:
        x += 1
        io_.write(str(x) + "\n")
        if x >= 15000:
            break

generate_int_pool()


def create_list_of_size_n(n: int):
    arr = []
    counter = 0
    max_size = 150000
    
    while counter <= 12:
        counter += 1
        arr.append(counter * n)
        if len(arr) == max_size:
            break
    return arr


print(create_list_of_size_n(10))


