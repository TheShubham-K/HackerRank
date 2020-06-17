import numpy as np
# my_arr = np.array([[1,2], [3,4]])
# print(np.sum(my_arr, axis=0))
# print(np.sum(my_arr, axis = 1))
# print(np.sum(my_arr))
# print(np.sum(my_arr, axis = None))

n,m = map(int, input().split())
A = np.array([input().split() for _ in range(n)], int)
print(np.prod(np.sum(A, axis=0), axis=0))
