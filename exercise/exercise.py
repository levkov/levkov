#!/usr/bin/env python



def calculate_combinations(numbers, target_sum, partial=[], counter=0):
    s = sum(partial)
    if s == target_sum:
        print "sum(%s)=%s" % (partial, target_sum)
        counter += 1

    if s >= target_sum:
        return

    for i in range(len(numbers)):
        n = numbers[i]
        remaining = numbers[i+1:]
        calculate_combinations(remaining, target_sum, partial + [n],counter)
    return counter


total_combinations = calculate_combinations([1, 2, 3, 4], target_sum=6)
print total_combinations

counter = 0
total_combinations = calculate_combinations([5, 5, 15, 10], target_sum=15)
print total_combinations

