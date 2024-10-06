"""
In this problem there a list of numbers given and we have to check the list and find if any elements of the list are duplicate if so we have to return True
"""

l1 = [1,2,3,4,1]
l2 = [1,1,1,2,3,4,5,6]
l3 = [1,2,3,4,5]

def check_duplicate(nums: list)-> bool:
    """In this we created a hash set which stores the hash of numbers in the nums list"""
    hash_set = set()

    """The for loops checks for the numbers in hash and since hash is unique to each number the loop doesnt have to go through the list twice
        This keeps the time complexity of the solution to O(n) instead of O(n^2)"""

    for i in nums:
        if i in hash_set:
            return True
        else:
            hash_set.add(i)
    return False

#Test cases
print(check_duplicate(l1))
print(check_duplicate(l2))
print(check_duplicate(l3))